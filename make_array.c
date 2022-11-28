/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_array.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: intonoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:12:47 by intonoya          #+#    #+#             */
/*   Updated: 2022/11/28 20:14:52 by intonoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_first_join(char *str)
{	
	int		len ;
	char	*array;
	int		j;

	j = 0;
	len = ft_strlen(str);
	array = malloc(len + 2);
	while (str[j])
	{
		array[j] = str[j];
		j++;
	}
	array[len] = ' ';
	array[len + 1] = '\0';
	return (array);
}

char	*ft_join_str(char **str)
{
	int		i;
	char	*array;

	i = 1;
	array = ft_first_join(str[i]);
	i++;
	while (str[i])
	{
		array = ft_strjoin(array, str[i]);
		i++;
	}
	i = 0;
	return (array);
}

int	*char_to_int(int len, char **map)
{
	int	*array;
	int	i;

	i = -1;
	while (map[++i])
	{
		if (ft_strlen(map[i]) > 16)
			print_error();
	}
	i = -1;
	array = malloc(sizeof(int) * len + 1);
	if (!array)
		return (0);
	while (map[++i])
		array[i] = ft_atoi(map[i]);
	array[i] = '\0';
	return (array);
}

void	free_leak(t_list **list)
{
	t_list	*next;

	while ((*list) != NULL)
	{
		next = (*list)->next;
		free((*list));
		(*list) = next;
	}
}
