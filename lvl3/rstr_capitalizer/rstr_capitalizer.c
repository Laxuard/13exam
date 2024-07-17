#include <unistd.h>

void lowercase(char *str)
{
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		str++;
	}
}
int main(int ac, char **av)
{
	if (ac > 1)
	{
		int i = 1;
		int j = 0;
		int toggle = 1;
		while (i < ac)
			lowercase(av[i++]);
		i = 1;
		while (i < ac)
		{
			j = 0;
			while (av[i][j])
			{
				j++;
			}
			while (j > 0)
			{
				if (av[i][j] >= 'a' && av[i][j] <= 'z')
				{
					if (toggle)
					{
						toggle = 0;
						av[i][j] -= 32;
					}
				}
				else if ((av[i][j] >= '0' && av[i][j] <= '9')|| av[i][j] > 32)
				{
					toggle = 0;
				}
				else
				{
					toggle = 1;
				}
				j--;
			}
			j = 0;
			while (av[i][j])
			{
				write(1, &av[i][j], 1);
				j++;
			}
			write (1, "\n", 1);
			i++;
		}

	}
	else
		write(1, "\n", 1);
	return 0;
}
