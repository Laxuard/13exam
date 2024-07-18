#include <unistd.h>

void repeat_alpha(char *str)
{
    int i = 0;
    char    j;

    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            j = str[i];
            while (j >= 'a')
            {
                write(1, &str[i], 1);
                j--;
            }
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            j = str[i];
            while (j >= 'A')
            {
                write(1, &str[i], 1);
                j--;
            }            
        }
        else
            write(1, &str[i], 1);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        repeat_alpha(av[1]);
    write(1, "\n", 1);
    return 0;
}