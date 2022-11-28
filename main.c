/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: intonoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:13:09 by intonoya          #+#    #+#             */
/*   Updated: 2022/11/28 20:14:38 by intonoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int a_nb, char *str[])
{
	char	*array_char;
	char	**map;
	int		*array_int;
	int		mtx_len;

	mtx_len = 0;
	array_int = NULL;
	array_char = NULL;
	if (a_nb > 1)
	{
		array_char = ft_join_str(str);
		if (!array_char)
			return (0);
		check(array_char);
		map = ft_split(array_char, ' ');
		mtx_len = matrix_len(map);
		array_int = char_to_int(mtx_len, map);
		check_doubles(array_int, mtx_len);
		if (is_sorted(array_int, mtx_len))
			return (0);
		array_to_list(array_int, mtx_len);
	}
	exit(0);
}
