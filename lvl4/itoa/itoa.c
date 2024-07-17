#include <stdlib.h>

char	*ft_itoa(int nbr)
{
	char *result;
	int len;
	long n = nbr;
	len = (n <= 0 ? 1 : 0);
	while (n && ++len)
		n /= 10;
	if (!(result = malloc(len + 1)))
		return  NULL;
	result[len--] = '\0';
	n = nbr;
	if (n == 0)
		result[0] = '0';
	if (n < 0)
	{
		result[0] = '-';
		n = -n;
	}
	while (n)
	{
		result[len--] = n % 10 + '0';
		n /= 10;
	}
	return (result);
}

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

char *ft_itoa(int nbr);

int main(void)
{
    int test_cases[] = {
        0,
        1,
        -1,
        12345,
        -12345,
        INT_MAX,
        INT_MIN,
        100,
        -100,
        42,
        -42
    };
    int num_tests = sizeof(test_cases) / sizeof(test_cases[0]);

    for (int i = 0; i < num_tests; i++)
    {
        char *result = ft_itoa(test_cases[i]);
        char expected[20];
        snprintf(expected, sizeof(expected), "%d", test_cases[i]);

        printf("Input: %d\n", test_cases[i]);
        printf("ft_itoa result: %s\n", result);
        printf("Expected result: %s\n", expected);

        if (strcmp(result, expected) == 0)
            printf("Test PASSED\n");
        else
            printf("Test FAILED\n");

        printf("\n");

        free(result);  // Don't forget to free the allocated memory
    }

    return 0;
}
