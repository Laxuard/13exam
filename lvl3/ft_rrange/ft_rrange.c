#include <stdlib.h>
#include <stdio.h>

int  abs(value)
{
	return ((value < 0) ? -value : value);
}

int	*ft_rrange(int start, int end)
{
	int *array;
	int len;
	int step;
	int  i = 0;

	len = abs(end - start) + 1;
	step = (start <= end) ? -1 : 1;
	array = malloc(sizeof(int) * len);
	if (!array)
		return (NULL);
	while (len--)
	{
		array[i++] = end;
		end += step;
	}
	return array;
}
