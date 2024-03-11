//NAME
//       atoi, atol, atoll - convert a string to an integer
//
//SYNOPSIS
//       #include <stdlib.h>
//
//       int atoi(const char *nptr);
//       long atol(const char *nptr);
//       long long atoll(const char *nptr);
//
//   Feature Test Macro Requirements for glibc (see feature_test_macros(7)):
//
//       atoll():
//           _ISOC99_SOURCE ||
//               || /* Glibc versions <= 2.19: */ _BSD_SOURCE ||
//           _SVID_SOURCE
//
//DESCRIPTION
//       The atoi() function converts the  initial  portion  of  the  string
//       pointed to by nptr to int.  The behavior is the same as
//
//           strtol(nptr, NULL, 10);
//
//       except that atoi() does not detect errors.
//
//       The  atol() and atoll() functions behave the same as atoi(), except
//       that they convert the initial portion of the string to their return
//       type of long or long long.
//
//RETURN VALUE
//       The converted value or 0 on error.
#include "libft.h"

int	ft_atoi(const char *nptr)
{
	size_t	i;
	int		sign;
	int		result;

	i = 0;
	sign = 1;
	result = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(nptr[i]))
	{
		result = result * 10 + nptr[i] - '0';
		i++;
	}
	return (sign * result);
}

//int main(void)
//{
//	printf("%d\n", ft_atoi("00"));
//	printf("%d\n", atoi("00"));
//	printf("%d\n", ft_atoi("123"));
//	printf("%d\n", atoi("123"));
//	printf("%d\n", ft_atoi("-123"));
//	printf("%d\n", atoi("-123"));
//	printf("%d\n", ft_atoi("+123"));
//	printf("%d\n", atoi("+123"));
//	printf("%d\n", ft_atoi("--123"));
//	printf("%d\n", atoi("--123"));
//	printf("%d\n", ft_atoi("++123"));
//	printf("%d\n", atoi("++123"));
//	printf("%d\n", ft_atoi("\v-123"));
//	printf("%d\n", atoi("\v-123"));
//	printf("%d\n", ft_atoi("  123"));
//	printf("%d\n", atoi("  123"));
//	printf("%d\n", ft_atoi("  -123"));
//	printf("%d\n", atoi("  -123"));
//	printf("%d\n", ft_atoi("  --123"));
//	printf("%d\n", atoi("  --123"));
//	printf("%d\n", ft_atoi("  -a123"));
//	printf("%d\n", atoi("  -a123"));
//	printf("%d\n", ft_atoi("  123a"));
//	printf("%d\n", atoi("  123a"));
//	printf("%d\n", ft_atoi("  a"));
//	printf("%d\n", atoi("  a"));
//	printf("%d\n", ft_atoi("a"));
//	printf("%d\n", atoi("a"));
//	printf("%d\n", ft_atoi("-2147483648"));
//	printf("%d\n", atoi("-2147483648"));
//	printf("%d\n", ft_atoi("2147483648"));
//	printf("%d\n", atoi("2147483648"));
//	printf("%d\n", ft_atoi("2147483647"));
//	printf("%d\n", atoi("2147483647"));
//	return (0);
//}