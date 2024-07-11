#include <unistd.h>

int	main(int argc, char **argv)
{
	int i = 0;
	int j = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			while (argv[2][j] && argv[2][j] != argv[1][i])
				j++;
			if (argv[2][j] == '\0')
				break;
			i++;
			j++;
		}
		if (argv[1][i] == '\0')
			write (1, argv[1], i);
	}
	write (1, "\n", 1);
	return 0;
}
