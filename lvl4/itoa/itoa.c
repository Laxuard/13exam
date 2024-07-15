char negative()

char	*ft_itoa(int nbr)
{
	int sign = 1;
	char *result;
	int len = 1;
	int nb = nbr;
	int i;
	
	while (nb > 9)
	{
		len++;
		nb /= 10;
	}
	result = malloc(len + 1);
	if (result)
		return (NULL);
	result[len] = '\0';
	if (nbr >= 0)
	{
		i = len - 1;
		while (i >= 0)
		{
			result[i] = base[nbr % baselen];
			nbr /= baselen;
			i--;
		}
	} 
	else
		negative()
	return (result);
}
