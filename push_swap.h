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

char	**ft_split(char const *s, char c);
size_t	ft_strlen(const char *str);
int     ft_atoi(const char *str);
char	*ft_join_str(char **str);
char	*ft_strjoin(char const *s1, char const *s2);
void	array_to_list(int *array, int len);
void    butterfly(t_list **stack_a, t_list **stack_b, int n);
void    push_to_stack_a(t_list **stack_a, t_list **stack_b, int len);
void	check(char *str);
void    check_doubles(int *args, int arg_len);
void    exit_message(char *str);
int	    matrix_len(char **str);
int	    maximum(t_list **list);
int	    is_sorted(int *array, int len);
int     *char_to_int(int len, char **map);
int     cut_list_front(t_list **list);
void    index_list(t_list **list, int len);
void    sort_list(t_list **stack_a, t_list **stack_b, int len);
void    free_leakc(t_list **list);

//void    sa(t_list *list, int i);
//void    sb(t_list *list, int i);
void	sa_sb(t_list **list, int i);
void	ra_rb(t_list **list, int i);
void	rra_rrb(t_list **list, int n);
void	ss(t_list *list_a, t_list *list_b);
void	pa(t_list **list_a, t_list **list_b);
void	pb(t_list **list_a, t_list **list_b);
void	rr(t_list **list_a, t_list **list_b);
void	rra(t_list **list_a, t_list **list_b);

#endif