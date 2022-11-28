/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: intonoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:14:35 by intonoya          #+#    #+#             */
/*   Updated: 2022/11/28 20:18:36 by intonoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	maximum(t_list **list)
{
	int		i;
	int		j;
	int		max;
	t_list	*node;

	i = 0;
	j = 0;
	node = *list;
	max = node->index;
	node = node->next;
	while (node)
	{
		if (max < node->index)
		{
			max = node->index;
			node = node->next;
			j = ++i;
		}
		else
		{
			node = node->next;
			i++;
		}
	}
	return (j);
}
