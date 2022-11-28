#include "push_swap.h"

int	matrix_len(char **str)
{
	int	i;

	i = 0;
	while (str[i])
			i++;
	return (i);
}

int	ft_atoi(char *str)
{
	int			i;
	long int	num;
	int			min;

	min = 1;
	num = 0;
	i = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			min = min * -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		num = num * 10 + (str[i] - 48);
		i++;
	}
	if (num * min > INT_MAX || num * min < INT_MIN)
		exit_message("Argument error!\n");
	return (num * min);
}

int	is_sorted(int *array, int len)
{
	int	i;

	i = 0;
	if (len == 1 || len == 0)
		return (1);
	while (i < len - 1)
	{
		if (array[i] > array[i + 1])
			return (0);
		i++;
	}
	return (1);
}

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