/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: intonoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:06:01 by intonoya          #+#    #+#             */
/*   Updated: 2022/11/28 20:17:52 by intonoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# define INT_MAX 2147483647
# define INT_MIN -2147483648
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

typedef struct s_list
{
	int				data;
	int				index;
	struct s_list	*next;
}					t_list;

char	**ft_split(char const *s, char c);
void	print_error(void);
int		ft_strlen(char *str);
char	*ft_join_str(char **str);
void	check(char *str);
int		*char_to_int(int len, char **map);
int		matrix_len(char **str);
int		ft_atoi(char *str);
void	check_doubles(int *arr_int, int arr_len);
char	*ft_strjoin(char *str_main, char *str_copy);
void	array_to_list(int *array, int len);
void	index_list(t_list **list, int len);
void	sort_list(t_list **stack_a, t_list **stack_b, int len);
void	free_leak(t_list **list);
void	butterfly(t_list **stack_a, t_list **stack_b, int len);
void	push_to_stack_a(t_list **stack_a, t_list **stack_b, int n);
int		maximum(t_list **list);
int		is_sorted(int *arr, int len);

void	sa_sb(t_list **list, int i);
void	ra_rb(t_list **list, int i);
void	rra_rrb(t_list **list, int n);
void	rra_rrb(t_list **list, int n);
void	ss(t_list *a_list, t_list *b_list);
void	pa(t_list **a_list, t_list **b_list);
void	pb(t_list **a_list, t_list **b_list);
void	rr(t_list **list_a, t_list **list_b);
#endif
