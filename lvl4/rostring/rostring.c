#include <unistd.h>

int is_space(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

void	rostring(char *str)
{
	int i = 0;
	int len = 0;
	while (str[i])
	{
		while (is_space(str[i]))
			i++;
		if (str[i] && !is_space(str[i]))
		{
			if (!len)
			{
				while (str[i] && !is_space(str[i++]))
					len++;
			}
			else 
			{
				while (str[i] && !is_space(str[i]) && write(1, &str[i++], 1))
					;
				write (1, " ", 1);
			}
		}
	}
	i = 0;
	while (is_space(str[i]))
		i++;
	while (len--)
		write(1, &str[i++], 1);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		rostring(av[1]);
	}
	write (1, "\n", 1);
	return 0;
}
