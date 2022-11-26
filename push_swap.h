#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# define INT_MAX 2147483647
# define INT_MIN -2147483648
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include "../libft/libft.h"

typedef struct s_list
{
    int     data;
    int     index;
    t_list  *next;
}           t_list;

void    butterfly(t_list **stack_a, t_list **stack_b, int n);
void    push_to_stack_a(t_list **stack_a, t_list **stack_b, int len);
void	check(char *str);
void    check_doubles(int *args, int arg_len);

void	sa_sb(t_list **list, int i);
void	ss(t_list *list_a, t_list *list_b);
void	pa(t_list **list_a, t_list **list_b);
void	pb(t_list **list_a, t_list **list_b);
void	ra_rb(t_list **list, int i);
void	rr(t_list **list_a, t_list **list_b);
void	rra_rrb(t_list **list, int n);
void	rra(t_list **list_a, t_list **list_b);

#endif