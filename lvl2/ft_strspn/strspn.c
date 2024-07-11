size_t ft_strspn(const char *s, const char *accept)
{
	int len = 0;
	char *ptr;
	while (*s)
	{	
		ptr = accept;
		while(*ptr)
		{
			if (*s == *ptr)
				break;
			ptr++;
		}
		if (*ptr == '\0')
			return len;
		len++;
		s++;

	}
	return len;
}
