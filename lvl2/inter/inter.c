#include <unistd.h>

int is_double(char c, char *str, int n)
{
	int i = 0;
	while (i < n)
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return 0;
}

void	inter(char *s1, char *s2)
{
	char ascii[127] = {0};
	int i = 0;
	int j = 0;
	int len = 0;

	while (s2[len])
		len++;

	while (s1[i])
	{
		if (!is_double(s1[i], ascii, j) && is_double(s1[i], s2, len))
		{
			ascii[j] = s1[i];
			write(1, &s1[i], 1);
			j++;
		}
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac == 3)
		inter(av[1], av[2]);
	write(1, "\n", 1);
	return 0;
}
