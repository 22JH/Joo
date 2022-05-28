/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   second_step.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joohyule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 19:00:14 by joohyule          #+#    #+#             */
/*   Updated: 2022/05/28 21:51:46 by joohyule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fisrt_step.c"

void	min_up (char **new

void	second_step(char **new_board, char **input_arr,  int size)
{
	min_up (new_board, input_arr, size);

	min_down (new_board, input_arr, size);

	min_left (new_board, input_arr, size);

	min_right (new_board, input_arr, size);

	last_step (new_board, input_arr, size);



