#include "push_swap.h"

int	main(int a_nb, char *str)
{
	char	*arr_char;
	char	**map;
	int		*arr_int;
	int		mx_len;

	mx_len = 0;
	arr_int = NULL;
	arr_char = NULL;
	if (a_nb > 1)
	{
		arr_char = ft_join_str(str);
		if (!arr_char)
			return (0);
		check(arr_char);
		map = ft_split(arr_char, ' ');
		mx_len = matrix_len(map);
		arr_int = char_to_int(mx_len, map);
		check_doubles(arr_int, mx_len);
		if (is_sorted(arr_int, mx_len))
			return (0);
		arr_to_list(arr_int, mx_len);
	}
	exit(0);
}