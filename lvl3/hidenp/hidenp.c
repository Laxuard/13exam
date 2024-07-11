#include <unistd.h>

int ft_strlen(char *str)
{
	int len = 0;
	while (str[len])
		len++;
	return len;
}

int	main(int ac, char **av)
{
	int i = 0;
	int j = 0;
	int count = 0;

	int len = ft_strlen(av[1]);
	if (ac == 3)
	{
		while (av[1][i])
		{
			while (av[2][j])
			{
				if (av[1][i] == av[2][j])
				{
					count++;
					break;
				}
				j++;
			}
			i++;
		}
		if (count == len)
			write(1, "1", 1);
		else 
			write(1, "0", 1);
	}
	write (1, "\n", 1);
	return 0;
}
	
