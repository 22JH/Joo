#include <unistd.h>
#include "check_size.c"
#include "make_board.c"
#include "fill_the_board.c"
#include "check_last.c"
#include <stdio.h>

int	main(int argc, char **argv)
{
	int **board;
	int **input_arr;
	int size;

	if (argc != 2)
	{
		write (2, "Error\n", 6);
		return (1);
	}
	size = check_size(argv[1]);
	
	if (size == 1)
	{
		write (2, "Error\n", 6);
		return (1);
	}

	make_board(board, size); // 보드 할당 및 초기화

	put_n_input(input_arr, argv[1], size); // 인자 값 2차원 배열 할당 및 입력

	if (fill_the_board (board, input_arr, size, 0, 0)) // 보드 채우기
	{
		write (2, "Error\n", 6);
		return (1);
	}
	print_res(board, size); // 보드 출력

	return (0);
}
