#include <unistd.h>

void	reverse(char *str, int flag)
{
	int	start;
	int i = 0;
	if (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t'))
			i++;
		if (!str[i])
			return ;
		start = i;
		while (str[i] && str[i] != ' ' && str[i] != '\t')
			i++;
		reverse(&str[i], 0);
		write (1, &str[start], i - start);
		if (!flag)
			write (1, " ", 1);
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		reverse(av[1], 1);
	write (1, "\n", 1);
	return 0;
}
