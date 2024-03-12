#include "libft.h"

static int	ft_nbrlen(int n)
{
	int	length;

	if (n <= 0)
		length = 1;
	else
		length = 0;
	while (n)
	{
		n /= 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	int		i;
	int		len;
	char	*result;

	if (n == -2147483648)
		return ("-2147483648");
	i = 0;
	len = ft_nbrlen(n);
	result = (char *)malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	if (n < 0)
	{
		result[i++] = '-';
		n = -n;
	}
	result[len] = '\0';
	while (len > i)
	{
		result[--len] = n % 10 + '0';
		n /= 10;
	}
	return (result);
}

//int main() {
//	int test_cases[] = {0, 2147483647, -456, -2147483648};
////	int test_cases[] = {-2147483648};
//
//	int num_cases = sizeof(test_cases) / sizeof(test_cases[0]);
//
//	for (int i = 0; i < num_cases; ++i) {
//		int n = test_cases[i];
//		char *result = ft_itoa(n);
//		printf("Input: %d, Output: %s\n", n, result);
//		free(result);
//	}
//
////	int i = -1000;
////	while (i <= -1000) {
////		printf("%d   %d\n", i, ft_numlen(i));
////		i++;
////	}
//
////	printf("-2147483648   %d\n", ft_numlen(-2147483648));
//
//	return 0;
//}