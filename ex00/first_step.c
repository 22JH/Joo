/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_step.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joohyule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 18:16:37 by joohyule          #+#    #+#             */
/*   Updated: 2022/05/28 21:30:19 by joohyule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "make_board.c"
#include "second_step.c"

void	max_up(new_board, input_arr, size);
void	max_down(new_board, input_arr, size);
void	max_left(new_board, input_arr, size);
void	max_right(new_board, input_arr, size);


void	first_step(int **input_arr, int size)
{	
	int **new_board;

	make_new_board(new_board, size);

	max_up(new_board, input_arr, size);

	max_down(new_board, input_arr, size);

	max_left(new_board, input_arr, size);

	max_right(new_board, input_arr, size);

	second_step(new_board, input_arr, size);
}

void	max_up(new_board, input_arr, size)
{
	int	i;
	int	j;
	int	max;

	i = 0;
	max = 0;
	while(i < size / 4)
	{
		if(input_arr[0][i] == size / 4)
			max = input_arr[0][i];
		i++ ;
	}
	
	i = 0;
	j = 1;
	if (max != 0)
	{
		while(i < size / 4)
		{
			input_arr[i][max] = j++ ; // 최대값이 있는 인덱스 행에 1부터 최대값까지 채워줌
			i++ ;
		}
	}
}

void	max_down(new_board, input_arr, size)
{
	int	i;
	int	j;
	int	max;

	i = 0;
	max = 0;
	while(i < size / 4)
	{
		if(input_arr[1][i] == size / 4)
			max = input_arr[1][i];
		i++ ;
	}
	
	i = (size / 4) - 1; // 가장 밑에 해당하는 인덱스
	j = 1;
	if (max != 0)
	{
		while(i >= 0)
		{
			input_arr[i][max] = j++ ; // 최대값이 있는 인덱스 행에 밑에서 위로 1부터 최대값까지 채워줌
			i-- ;
	}
}

void	max_left(new_board, input_arr, size)
{
	int	i;
	int	j;
	int	max;

	i = 0;
	max = 0;
	while(i < size / 4)
	{
		if(input_arr[2][i] == size / 4)
			max = input_arr[2][i];
		i++ ;
	}
	
	i = 0;
	j = 1;
	if (max != 0)
	{
		while(i < size / 4)
		{
			input_arr[max][i] = j++ ; // 최대값이 있는 인덱스 행에 1부터 최대값까지 채워줌
			i++ ;
		}
	}
}

void	max_right(new_board, input_arr, size)
{
	int	i;
	int	j;
	int	max;

	i = 0;
	max = 0;
	while (i < size / 4)
	{
		if(input_arr[][i] == size / 4)
			max = input_arr[2][i];
		i++ ;
	}
	
	i = (size / 4) - 1;
	j = 1;
	if (max != 0)
	{
		while (i < size / 4)
		{
			input_arr[max][i] = j++ ; // 최대값이 있는 인덱스 행에 1부터 최대값까지 채워줌
			i-- ;
		}
	}
}
