#include "push_swap.h"

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