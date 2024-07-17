#include <unistd.h>

int atoi(char *str)
{
	int num = 0;
	while (*str >= '0' && *str <= '9')
		num = num * 10 + *str++ - '0';
	return num;	
}

int is_prime(int num)
{
	if (num < 2)
		return 0;
	int i = 2;
	while (i <= num / 2)
	{
		if (num % i == 0)
			return 0;
		i++;
	}
	return 1;
}

void putnbr(int nbr)
{
	if (nbr > 9)
		putnbr(nbr / 10);
	char num = nbr % 10 + '0';
	write(1, &num, 1);
}

void prime_sum(int num)
{
	int i = 0;
	int sum = 0;
	while (i <= num)
	{
		if (is_prime(i))
			sum += i;
		i++;
	}
	putnbr(sum);
}

int	main(int ac, char **av)
{
	if (ac == 2 && av[1][0] != '-')
	{
		prime_sum(atoi(av[1]));
		write (1, "\n", 1);
	}
	else 
		write (1, "0\n", 2);
	return 0;
}
