/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joohyule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 15:25:39 by joohyule          #+#    #+#             */
/*   Updated: 2022/05/28 18:58:42 by joohyule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <error_check.c>
#include <size_check.c>
#include <first_step.c>
#include <make_board.c>

int main(int argc, char **argv)
{
	int	size;
	int **input_arr;
	if (argc != 2)
	{
		write(2, "Error\n,", 6); // 들어온 인자가 2개 이상인경우(main,인자)
		return (1);
	}
	
	size = size_check(argv[1]); // 인자 길이
	input_arr = make_board(input_arr, argv[1], size); // input_arr 동적할당
	if (size == 0)	// size_check에서 잘못된 값이 들어오면 0이 들어오도록 설정
	{
		write(2, "Error\n", 6);
		return (1);
	}
	if (error_check(size, input_arr, argv[1])) // 인자가 size/4보다 크면 에러
	{
		write(2, "Error\n,", 6);
		return (1);
	}
	input_board(input_arr, argv[1], size);
	first_step(input_arr, size);
}
