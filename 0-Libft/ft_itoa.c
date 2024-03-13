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
	len = ft_nbrlen(n);
	result = (char *)malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
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
