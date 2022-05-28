/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_board.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joohyule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 17:09:01 by joohyule          #+#    #+#             */
/*   Updated: 2022/05/28 18:16:29 by joohyule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int **make_board(int **input_arr, char *argv, int size)
{
	int	i;

	i = 0;
	input_arr = (int **)malloc(sizeof(int*) * size / 4);
	while (i < size / 4)
	{
		input_arr[i] = (int*)malloc(sizeof(int) * size / 4); // 인자 값을 담아줄 2차원 배열
		i++ ;
	}
	return (input_arr);
}

void	input_borad(int **input_arr, char *argv, int size)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while(i < size)
	{
		j = 0;
		while(j < size)
		{
			input_arr[i][j] = argv[k] - '0'; // 인자 값을 만든 2차원 배열에 채워줌
			j++ ;
			k += 2;
		}
	}
}
