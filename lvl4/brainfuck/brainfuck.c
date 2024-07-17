#include <unistd.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	if (ac == 2)
		brainfuck(av[1]);
	write(1, "\n", 1);
	return 0;
}
