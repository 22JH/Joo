int		check_overlap(int **board, int size, int garo, int sero,int i);
int		last_check(int **board, int **input_arr, int size);
int		garo_right(int **board, int **input_arr, int size);
int		garo_left(int **board, int **input_arr, int size);
int		sero_down(int **board, int **input_arr, int size);
int		sero_up(int **board, int **input_arr, int size);

int	fill_the_board(int **board, int **input_arr, int size,int garo, int sero)
{
	int	i;
	
	i = 1;
	while (1)
	{
		while (i <= (size / 4) + 1)
		{
			if (check_overlap(board, size, garo, sero, i)) // 순서대로 채우는면서 중복이 되었는지 확인
				i++ ; // 중복이라면 i값 증가
			else
				break; // 중복이 아니라면 탈출
		}
		if (i == ((size / 4) + 1)) // i값이 최대 값이상 이면 0할당 및 리턴// 제일 처음 스택까지돌아오면 error
		{
			board[sero][garo] = 0;
			return (1);
		}
		else
			board[sero][garo] = i; // 아니라면 해당 칸의 값은 i
		
		if (garo == size / 4 && sero == size / 4) // 만약 끝까지 다 채웠다면 인풋 값과 비교
		{
			if (last_check(board, input_arr, size)) // 문제가 없다면 리턴 후 출력//error이면 1 아니면 0반환//:
			{
				if (i == size / 4)
					return (1);
				else
				{
					i++;
					continue;
				}
			}
			else
				return (0); // 출력
		}
		if (garo == size / 4) //만약 가로열이 끝까지 찼다면 세로행 증가, 가로 열 0 초기화
		{
			if (fill_the_board(board, input_arr, size, 0, sero + 1))
				return (0);
			else
			{
				i++;
				continue;
			}
		}
		else
		{
			if (fill_the_board(board, input_arr, size, garo + 1, sero)) // 채운후 다음 칸 재귀
				return (0);
			else
			{
				i++;
				continue;
			}
		}
	}
}

int	check_overlap(int **board, int size, int garo, int sero,int i)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (x <= size / 4)
	{
		if (i == board[sero][x])
			return (1);
		x++ ;
	}
	while (y <= size / 4)
	{
		if (i == board[y][garo])
			return (1);
		y++ ;
	}
	return (0);
}

int	last_check(int **board, int **input_arr, int size)
{
	if (sero_up(board,input_arr, size))
		return (1);

	if (sero_down(board,input_arr, size))
		return (1);

	if (garo_left(board, input_arr, size))
		return (1);

	if (garo_right(board, input_arr, size))
		return (1);
	return (0);
}
