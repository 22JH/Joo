/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joohyule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 16:18:32 by joohyule          #+#    #+#             */
/*   Updated: 2022/05/28 18:58:49 by joohyule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	size_check(char *input)
{
	int	i;
	int count;

	i = 0;
	count = 0;
	while (input[i])
	{
		if (i % 2 == 1 && input[i] != ' ')
			return (0);

		if (i % 2 == 0)
			count++;
		i++;
	}
	if (count % 4 != 0)
		return (0);

	if (count / 4 > 9)
		return (0);

	if (count / 4 < 4)
		return (0);

	return (count);
}

int main(void)
{
	char a [] = "4 3 2 1 1 2 2 2 4 3 21 1 22 2";
	printf("%d", size_check(a));
}
