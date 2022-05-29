#include <unistd.h>
void	print_res(int **board, int size);
int		garo_right(int **board, int **input_arr, int size);
int		garo_left(int **board, int **input_arr, int size);
int		sero_down(int **board, int **input_arr, int size);

int	sero_up(int **board, int **input_arr, int size)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	while (i < (size / 4))
	{	
		count = 1;
		j = 0;
		while (j < (size / 4) - 1)
		{
			if (board[0][i] < board[j + 1][i])
				count++;
			j++;
		}
		if (count != input_arr[0][i])
			return (1);
		i++;
	}
	
	return (0);
}

int	sero_down(int **board, int **input_arr, int size)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	while (i < (size / 4))
	{
		count = 1;
		j = ((size / 4) - 1);
		while (j - 1 >= 0)
		{
			if (board[(size / 4) - 1][i] < board[j - 1][i])
				count++;
			j-- ;
		}
		if (count != input_arr[1][i])
			return (1);
		i++ ;
	}
	return (0);
}
	
int	garo_left(int **board, int **input_arr, int size)
{
	int	i;
	int	j;
	int	count;

	count = 1;
	i = 0;
	while (i < (size / 4))
	{
		j = 0;
		while (j < (size / 4) - 1)
		{
			if (board[i][0] < board[i][j + 1])
				count++;
			j++;
		}
		if (count != input_arr[2][i])
			return (1);
		i++;
	}
	return (0);
}

int	garo_right(int **board, int **input_arr, int size)
{
	int	i;
	int	j;
	int	count;

	count = 1;
	i = 0;
	while (i < (size / 4))
	{
		j = ((size / 4) - 1);
		while (j - 1 >= 0)
		{
			if (board[i][(size / 4) - 1] < board[i][j - 1])
				count++;
			j-- ;
		}
		if (count != input_arr[3][i])
			return (1);

		i++ ;
	}
	return (0);
}

void	print_res(int **board, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size / 4)
	{	
		j = 0;
		while (j < size / 4)
			write (1, &board[i][j], 1);
	}
}
