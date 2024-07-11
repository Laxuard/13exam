#include <unistd.h>

int is_space(char c){
	return (c == ' ' || (c >= 9 && c <= 13));
}
	

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		av++;
		while (is_space(**av))
			(*av)++;
		while (**av)
		{
			if (!is_space(**av))
				write(1, (*av)++, 1);
			else 
			{
				while (is_space(**av))
					(*av)++;
				if (**av)
					write(1, "   ", 3);
			}

		}
	}
	write (1, "\n", 1);
	return 0;
}
