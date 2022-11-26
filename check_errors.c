#include "push_swap.h"

void    exit_message(char *str)
{
    ft_putstr_fd(str, 1);
    exit(0);
}

void	check(char *str)
{
	int	i;

	i = 0;
	if ((str[i] >= '0' && str[i] <= '9') || str[i] == ' '
		|| ((str[i] == '+' || str[i] == '-')
			&& (str[i + 1] >= '0' && str[i + 1] <= '9')))
			i++;
	while (str[i])
	{
		if ((str[i] >= '0' && str[i] <= '9') || str[i] == ' ')
			i++;
		else
			if ((str[i] == '+' || str[i] == '-')
				&& (str[i + 1] >= '0' && str[i + 1] <= '9')
				&& str[i - 1] == ' ')
			i++;
		else
			exit_message("Error!\n");
	}
}

void    check_doubles(int *args, int arg_len)
{
    int i;
    int j;

    i = 0;
    while(i < arg_len)
    {
        j = i + 1;
        while (j < arg_len)
        {
            if (i != j && args[i] == args[j])
                exit_message("Dublicated arguments!\n");
            j++;
        }
    }
    i++;
}