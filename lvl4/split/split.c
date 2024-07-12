#include <stdlib.h>

int is_space(char  c) {
	return (c == ' ' || (c >= 9 && c <= 13));
}

int	ft_count(char  *str)
{
	int	count = 0;
	int toggle = 0;

	while (*str)
	{
		if (is_space(*str))
			toggle = 0;
		else 
		{
			if (!toggle)
			{
				toggle = 1;
				count++;
			}
		}
		str++;
	}
	return count;
}

char *ft_strdup(char *str)
{
	char *result;
	int len = 0;
	int i = 0;

	while (str[len] && !is_space(str[len]))
		len++;
	if  (len == 0)
		return (NULL);
	result = (char *)malloc(len + 1);
	if (!result)
		return (NULL);
	while (i < len)
	{
		result[i] = str[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

char	**ft_split(char *str)
{
	char **result;
	int 	count;
	int i = 0;

	if (!str)
		return NULL;
	count = ft_count(str);
	result = (char **)malloc(sizeof(char *) * (count + 1));
	if (!result)
		return (NULL);
	while (*str)
	{
		while (*str && is_space(*str))
			str++;
		if (*str)
		{
			result[i] = ft_strdup(str);
				i++;
			while (*str && !is_space(*str))
				str++;
		}
	}
	result[i] = 0;
	return result;
}

#include <stdio.h>
#include <stdlib.h>

// Declare the ft_split function
char **ft_split(char *str);

int main() {
    char *test_strings[] = {
        "Hello World",
        "   Multiple   Spaces   Between   Words   ",
        "Tabs\tand\tnewlines\nare\talso\ndelimiters",
        "",
        "SingleWord",
        "  Leading and trailing spaces  ",
        NULL
    };

    for (int i = 0; test_strings[i] != NULL; i++) {
        printf("Original string: \"%s\"\n", test_strings[i]);
        char **result = ft_split(test_strings[i]);

        if (result == NULL) {
            printf("ft_split returned NULL\n\n");
            continue;
        }

        printf("Split result:\n");
        for (int j = 0; result[j] != NULL; j++) {
            printf("[%d]: \"%s\"\n", j, result[j]);
        }

        // Free the allocated memory
        for (int j = 0; result[j] != NULL; j++) {
            free(result[j]);
        }
        free(result);

        printf("\n");
    }

    return 0;
}
