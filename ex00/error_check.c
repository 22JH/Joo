/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joohyule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 16:57:47 by joohyule          #+#    #+#             */
/*   Updated: 2022/05/28 18:13:03 by joohyule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int error_check(int size, char **input_arr, char *argv)
{
	int	i;
	int j;

	i = 0;
	while (i < size / 4)
	{
		j = 0;
		while (j < size / 4)
		{
			if (input_arr[i][j] > size / 4)  // 인자의 최대값이 size / 4 보다 크면 에러
				return (1);
			j++ ;
		}
		i++ ;
	}
	i = 0;
	while(i < size)
	{
		if (!(argv[i] <= '1' && argv[i] >= '9')) // 숫자가 아니면 에러
			return (1);
		i += 2;
	}
	
	return (0);
}
