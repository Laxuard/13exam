#include <stdio.h>

int	max(int *tab, unsigned int len)
{
	if (len == 0)
		return 0;
	int res = tab[0];
	unsigned int i = 0;

	while (i < len)
	{
		if (tab[i] > res)
			res = tab[i];
		i++;
	}
	return res;
}
