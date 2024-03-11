//NAME
//       strcmp, strncmp - compare two strings
//
//SYNOPSIS
//       #include <string.h>
//
//       int strcmp(const char *s1, const char *s2);
//
//       int strncmp(const char *s1, const char *s2, size_t n);
//
//DESCRIPTION
//       The  strcmp() function compares the two strings s1 and s2.  The lo
//       cale is not taken into account (for a locale-aware comparison,  see
//       strcoll(3)).  The comparison is done using unsigned characters.
//
//       strcmp()  returns  an integer indicating the result of the compari
//       son, as follows:
//
//        0, if the s1 and s2 are equal;
//
//        a negative value if s1 is less than s2;
//
//        a positive value if s1 is greater than s2.
//
//       The strncmp() function is similar,  except  it  compares  only  the
//       first (at most) n bytes of s1 and s2.
//
//RETURN VALUE
//       The  strcmp()  and strncmp() functions return an integer less than,
//       equal to, or greater than zero if s1 (or the first n bytes thereof)
//       is  found,  respectively,  to be less than, to match, or be greater
//       than s2.
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char	*v_s1;
	const unsigned char	*v_s2;
	size_t				i;

	v_s1 = (const unsigned char *)s1;
	v_s2 = (const unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (v_s1[i] && v_s2[i] && v_s1[i] == v_s2[i] && n > 0)
	{
		i++;
		n--;
	}
	return (v_s1[i] - v_s2[i]);
}

//int main(void)
//{
//	printf("%d\n", ft_strncmp("aa", "bb", 0));
//	printf("%d\n", strncmp("aa", "bb", 0));
//	printf("%d\n", ft_strncmp("aa", "bb", 1));
//	printf("%d\n", strncmp("aa", "bb", 1));
//	printf("%d\n", ft_strncmp("aa", "bb", 2));
//	printf("%d\n", strncmp("aa", "bb", 2));
//	printf("%d\n", ft_strncmp("aa", "bb", 3));
//	printf("%d\n", strncmp("aa", "bb", 3));
//
//	printf("%d\n", ft_strncmp("", "", 0));
//	printf("%d\n", strncmp("", "", 0));
//	printf("%d\n", ft_strncmp("", "", 1));
//	printf("%d\n", strncmp("", "", 1));
//
//	printf("%d\n", ft_strncmp("", "a", 0));
//	printf("%d\n", strncmp("", "a", 0));
//	printf("%d\n", ft_strncmp("", "a", 1));
//	printf("%d\n", strncmp("", "a", 1));
//	printf("%d\n", ft_strncmp("", "a", 2));
//	printf("%d\n", strncmp("", "a", 2));
//
//	printf("%d\n", ft_strncmp("a", "", 0));
//	printf("%d\n", strncmp("a", "", 0));
//	printf("%d\n", ft_strncmp("a", "", 1));
//	printf("%d\n", strncmp("a", "", 1));
//	printf("%d\n", ft_strncmp("a", "", 2));
//	printf("%d\n", strncmp("a", "", 2));
//
//	printf("%d\n", ft_strncmp("asdfghjkl", "asdfghjkl", 10));
//	printf("%d\n", strncmp("asdfghjkl", "asdfghjkl", 10));
//	printf("%d\n", ft_strncmp("asdf1ghjkl", "asdf1ghjkl", 20));
//	printf("%d\n", strncmp("asdf1ghjkl", "asdf1ghjkl", 20));
//	printf("%d\n", ft_strncmp("asdf1ghjkl", "asdf5ghjkl", 20));
//	printf("%d\n", strncmp("asdf1ghjkl", "asdf5ghjkl", 20));
//	printf("%d\n", ft_strncmp("asdf1ghjkl", "asdf5ghjkl", 2));
//	printf("%d\n", strncmp("asdf1ghjkl", "asdf5ghjkl", 2));
//
//	printf("%d\n", ft_strncmp("a", "\200", 2));
//	printf("%d\n", strncmp("a", "\200", 2));
//	return (0);
//}