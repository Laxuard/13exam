#include <unistd.h>

int is_double(char c, char *str, int n)
{
	int i = 0;
	while (i < n)
	{
		if (c == str[i])
			return 1;
		i++;
	}
	return 0;
}

void	ft_union(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	unsigned char union_str[256] = {0};

	while (s1[i])
	{
		if (!is_double(s1[i], union_str, j))
		{
			union_str[j] = s1[i];
			write(1, &s1[i], 1);
			j++;
		}
		i++;
	}
	i = 0;
	while (s2[i])
	{
		if (!is_double(s2[i], union_str, j))
		{
			union_str[j] = s2[i];
			write(1, &s2[i], 1);
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		ft_union(argv[1], argv[2]);
	}
	write (1, "\n", 1);
	return 0;
}
