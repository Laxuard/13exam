#include <stdlib.h>

int abs(int value)
{
    return (value < 0) ? -value : value;
}

int *ft_range(int start, int end)
{
    int len;
    int *array;
    int i = 0;
    int step = (start <= end) ? 1 : -1;

    len = abs(end - start) + 1;
    array = malloc(sizeof(int) * len);
    if (!array)
        return NULL;

    while (i < len)
    {
        array[i++] = start;
        start += step;
    }
    return array;
}
