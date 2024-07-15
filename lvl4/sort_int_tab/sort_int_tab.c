void	sort_int_tab(int *tab, unsigned int size)
{
	int swaps = 1;
	int i = 0;
	int tmp;

	while (swaps)
	{
		i = 0;
		swaps = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
				swaps++;
			}
			i++;
		}
	}
}
