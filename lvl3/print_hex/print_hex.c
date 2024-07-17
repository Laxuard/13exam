#include <unistd.h>

int	atoi(char *str)
{
	int num = 0;
	while (*str)
	{
		num = num * 10 + *str - '0';
		str++;
	}
	return num;
}

void print_hex(int num)
{
	int n;
	if (num >= 16)
		print_hex(num / 16);
	write (1, &"0123456789abcdef"[num % 16], 1);
}

int  main(int ac, char **av)
{
	if (ac == 2)
		print_hex(atoi(av[1]));
	write(1, "\n", 1);
	return 0;
}
