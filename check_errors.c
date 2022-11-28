/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: intonoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:11:35 by intonoya          #+#    #+#             */
/*   Updated: 2022/11/28 20:14:23 by intonoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_error(void)
{
	write(2, "Error!\n", 7);
	exit(1);
}

void	check(char *str)
{
	int	i;

	i = 0;
	if ((str[i] >= '0' && str[i] <= '9') || str[i] == ' '
		|| ((str[i] == '+' || str[i] == '-')
			&& (str[i + 1] >= '0' && str[i + 1] <= '9')))
			i++;
	while (str[i])
	{
		if ((str[i] >= '0' && str[i] <= '9') || str[i] == ' ')
			i++;
		else
			if ((str[i] == '+' || str[i] == '-')
				&& (str[i + 1] >= '0' && str[i + 1] <= '9')
				&& str[i - 1] == ' ')
			i++;
		else
			print_error();
	}
}

void	check_doubles(int *arr_int, int arr_len)
{
	int	i;
	int	j;

	i = 0;
	while (i < arr_len)
	{
		j = i + 1;
		while (j < arr_len)
		{
			if (arr_int[i] == arr_int[j] && i != j)
				print_error();
			j++;
		}
		i++;
	}
}
