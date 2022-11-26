#include "push_swap.h"

void	rr(t_list **list_a, t_list **list_b)
{
	ra_rb(list_a, 3);
	ra_rb(list_b, 3);
	write(1, "rr\n", 3);
}

void	rra_rrb(t_list **list, int n)
{
	t_list	*address;
	t_list	*i;
	t_list	*j;

	if (*list)
	{
		address = *list;
		i = *list;
		while (address->next != NULL)
		{
			j = address;
			address = address->next;
		}
		j->next = NULL;
		address->next = i;
		*list = address;
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