//NAME
//       memcmp - compare memory areas
//
//SYNOPSIS
//       #include <string.h>
//
//       int memcmp(const void *s1, const void *s2, size_t n);
//
//DESCRIPTION
//       The  memcmp() function compares the first n bytes (each interpreted
//       as unsigned char) of the memory areas s1 and s2.
//
//RETURN VALUE
//       The memcmp() function returns an integer less than,  equal  to,  or
//       greater  than  zero  if  the  first n bytes of s1 is found, respec
//       tively, to be less than, to match, or be greater than the  first  n
//       bytes of s2.
//
//       For  a  nonzero return value, the sign is determined by the sign of
//       the difference between the first pair of bytes (interpreted as  un
//       signed char) that differ in s1 and s2.
//
//       If n is zero, the return value is zero.

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*v_s1;
	const unsigned char	*v_s2;
	size_t				i;

	if (n == 0)
		return (0);
	else if (!s1 || !s2)
		return (-1);
	v_s1 = (const unsigned char *)s1;
	v_s2 = (const unsigned char *)s2;
	i = 0;
	while (i < n && v_s1[i] == v_s2[i])
		i++;
	return (v_s1[i] - v_s2[i]);
}

//int main(void)
//{
////	printf("%d\n", memcmp("asd", "asd", 2));
////	printf("%d\n", ft_memcmp("asd", "asd", 2));
////	printf("%d\n", memcmp("013", "012", 3));
////	printf("%d\n", ft_memcmp("013", "012", 3));
////	printf("%d\n", memcmp("0", "2", 3));
////	printf("%d\n", ft_memcmp("0", "2", 3));
////	printf("%d\n", memcmp(NULL, NULL, 3));
////	printf("%d\n", ft_memcmp(NULL, NULL, 3));
//	printf("%d\n", memcmp("", "2", 2));
//	printf("%d\n", ft_memcmp("", "2", 2));
//
//	return (0);
//}

//int main() {
//	char *s1 = "Hello";
//	char *s2 = NULL;
//
//	// Test with s2 as NULL
//	int result = ft_memcmp(s1, s2, 5);
//	if (result == -1)
//		printf("Test passed: s2 is NULL\n");
//	else
//		printf("Test failed: s2 is not NULL\n");
//
//	// Test with s1 as NULL
//	result = ft_memcmp(s2, s1, 5);
//	if (result == -1)
//		printf("Test passed: s1 is NULL\n");
//	else
//		printf("Test failed: s1 is not NULL\n");
//
//	return 0;
//}