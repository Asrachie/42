//NAME
//       strnstr — locate a substring in a string
//
//SYNOPSIS
//       #include <bsd/string.h>
//
//       char *
//       strnstr(const char *big, const char *little, size_t len);
//
//DESCRIPTION
//       The strnstr() function locates the first occurrence of the null-terminated string little in
//       the string big, where not more than len characters are searched.  Characters that appear
//       after a ‘\0’ character are not searched.  Since the strnstr() function is a FreeBSD specific
//       API, it should only be used when portability is not a concern.
//
//RETURN VALUE
//       If little is an empty string, big is returned; if little occurs nowhere in big, NULL is
//       returned; otherwise a pointer to the first character of the first occurrence of little is
//       returned.

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	little_len;

	i = 0;
	if (!little[0])
		return ((char *)big);
	little_len = ft_strlen(little);
	while (i < len && big[i])
	{
		if (i + little_len <= len && strncmp(&big[i], little, little_len) == 0)
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}

//int main() {
//	const char *big = "Hello, world!";
//	const char *little = "world";
//	char *result;
//
//	result = ft_strnstr(big, little, strlen(big));
//
//	if (result != NULL) {
//		printf("Found: %s\n", result);
//	} else {
//		printf("Not found.\n");
//	}
//
//	return 0;
//}