/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: intonoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:07:44 by intonoya          #+#    #+#             */
/*   Updated: 2022/11/28 20:15:34 by intonoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rr(t_list **list_a, t_list **list_b)
{
	ra_rb(list_a, 3);
	ra_rb(list_b, 3);
	write(1, "rr\n", 3);
}

void	rra_rrb(t_list **list, int n)
{
	t_list	*adress;
	t_list	*tmp;
	t_list	*tmp2;

	if (*list)
	{
		adress = *list;
		tmp = *list;
		while (adress->next != NULL)
		{
			tmp2 = adress;
			adress = adress->next;
		}
		tmp2->next = NULL;
		adress->next = tmp;
		*list = adress;
		if (n == 1)
			write(1, "rra\n", 4);
		else if (n == 2)
			write(1, "rrb\n", 4);
	}
}

void	rra(t_list **list_a, t_list **list_b)
{
	rra_rrb(list_a, 3);
	rra_rrb(list_b, 3);
	write(1, "rrr\n", 4);
}
