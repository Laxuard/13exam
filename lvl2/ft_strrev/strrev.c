int ft_strlen(char *str)
{
	int len = 0;
	while(str[len])
		len++;
	return len;
}

char	*ft_strrev(char *str)
{
	int len = ft_strlen(str);
	int i = 0;
	char tmp;
	while (i < len / 2)
	{
		tmp = str[i];
		str[i] = str[len - i - 1];
		str[len - i -1] = tmp;
		i++;
	}
	return str;
}

#include <stdio.h>

int main(void)
{
    char str1[] = "Hello, World!";
    char str2[] = "123456789";
    
    printf("Original: %s\n", str1);
    printf("Reversed: %s\n", ft_strrev(str1));
    
    printf("Original: %s\n", str2);
    printf("Reversed: %s\n", ft_strrev(str2));
    
    // Testing ft_strlen function
    printf("Length of \"%s\": %d\n", str1, ft_strlen(str1));
    printf("Length of \"%s\": %d\n", str2, ft_strlen(str2));
    
    return 0;
}
