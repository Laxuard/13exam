#include <unistd.h>

void print(char c)
{
    write (1, &c, 1);
}

void ft_putnbr(int nbr)
{
    if (nbr > 9)
        ft_putnbr(nbr / 10);
    print(nbr % 10 + '0');
}   

int ft_atoi(char *str)
{
    int res = 0;
    while (*str >= '0' && *str <= '9')
        res = res * 10 + *str++ - '0';
    return res;
}

void mult_tab(int nbr)
{
    int i = 1;
    while (i < 10)
    {
        ft_putnbr(i);
        write (1, " x ", 3);
        ft_putnbr(nbr);
        write (1, " = ", 3);
        ft_putnbr(nbr * i);
        write (1, "\n", 1);
        i++;        
    }
    
}

int main(int ac, char **av)
{
    if (ac == 2)
        mult_tab(ft_atoi(av[1]));
    else 
        write (1, "\n", 1);
    return 0;
}