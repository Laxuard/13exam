#include <unistd.h>

int	main(int argc, char **argv)
{
	argv++;
	while (**argv)
	{
		if (**argv >= 'a' && **argv <= 'z')
			**argv -= 32;
		else if (**argv >= 'A' && **argv <= 'Z')
			**argv += 32;
		write(1, (*argv)++, 1);
	}
	write (1, "\n", 1);
	return 0;
}
