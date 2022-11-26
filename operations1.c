#include "push_swap.h"

void	sa_sb(t_list **list, int i)
{
	t_list	*first;
	t_list	*second;

	if ((*list)->next != NULL)
	{
		first = *list;
		second = first->next;
		first->next = second->next;
		second->next = first;
		(*list) = second;
		if (i == 1)
			write(1, "sa\n", 3);
		if (i == 2)
			write(1, "sb\n", 3);
	}
}

void	ss(t_list *list_a, t_list *list_b)
{
	sa_sb(&list_a, 3);
	sa_sb(&list_b, 3);
	write(1, "ss\n", 3);
}

void	pa(t_list **list_a, t_list **list_b)
{
	t_list	*push;

	push = NULL;
	if (*list_b)
	{
		push = *list_b;
		(*list_b) = (*list_b)->next;
		push->next = *list_a;
		*list_a = push;
		write(1, "pa\n", 3);
	}
}

void	pb(t_list **list_a, t_list **list_b)
{
	t_list	*push;

	push = NULL;
	if (*list_a)
	{
		push = *list_a;
		(*list_a) = (*list_a)->next;
		push->next = *list_b;
		*list_b = push;
		write(1, "pb\n", 3);
	}
}

void	ra_rb(t_list **list, int i)
{
	t_list	*address;
	t_list	*node;

	address = NULL;
	node = NULL;
	if ((*list)->next != NULL)
	{
		address = *list;
		(*list) = (*list)->next;
		node = *list;
		if (address)
		{
			while (node->next != NULL)
			{
				node = node->next;
			}
			node->next = address;
			node->next->next = NULL;
		}
		if (i == 1)
			write(1, "ra\n", 3);
		else if (i == 2)
			write(1, "rb\n", 3);
	}
}