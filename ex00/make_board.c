#include <stdlib.h>
#include <stdio.h>

void	init_board(int **board, int size);
void	put_n_input(int **input_arr, char *argv, int size);

void	make_board(int **board, int size)
{
	int	i;

	i = 0;
	board = (int**)malloc(sizeof(int*) * size / 4);
	
	while(i < size / 4)
	{
		board[i] = (int*)malloc(sizeof(int) * size / 4); // 보드 메모리 할당.
		i++;
	}
	
	init_board(board, size);
}

void	init_board(int **board, int size)
{
	int	i;
	int	j;
	
	i = 0;
	while (i < size / 4)
	{
		j = 0;
		while (j < size / 4)
		{
			board[i][j] = 0; // 0으로 초기화
			j++ ;
		}
		i++;
	}
	
	i = 0;
	while (i < size / 4)
	{
		free(board[i]);
		i++;
	}
	free(board);
}

void	put_n_input(int **input_arr, char *argv, int size)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	input_arr = (int**)malloc(sizeof(int*) * 4);

	while(i < 4)
	{
		input_arr[i] = (int*)malloc(sizeof(int) * size / 4); // 인자를 2차원 배열로 만들고 0으로 초기화
		i++;
	}
	i = 0;
	k = 0;
	while(i < 4)
	{
		j = 0;
		while(j < size / 4)
		{
			input_arr[i][j] = argv[k] - '0';
			k += 2;
			j++ ;
		}
		i++ ;
	}

	i = 0;
	while(i < 4)
	{
		free(input_arr[i]);
		i++;
	}
	free(input_arr);
}
