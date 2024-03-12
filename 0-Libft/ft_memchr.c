//NAME
//       memchr, memrchr, rawmemchr - scan memory for a character
//
//SYNOPSIS
//       #include <string.h>
//
//       void *memchr(const void *s, int c, size_t n);
//
//       void *memrchr(const void *s, int c, size_t n);
//
//       void *rawmemchr(const void *s, int c);
//
//   Feature Test Macro Requirements for glibc (see feature_test_macros(7)):
//
//       memrchr(), rawmemchr(): _GNU_SOURCE
//
//DESCRIPTION
//       The  memchr() function scans the initial n bytes of the memory area
//       pointed to by s for the first instance of c.  Both c and the  bytes
//       of  the  memory  area  pointed  to by s are interpreted as unsigned
//       char.
//
//       The memrchr() function is like the memchr() function,  except  that
//       it  searches  backward  from the end of the n bytes pointed to by s
//       instead of forward from the beginning.
//
//       The rawmemchr() function is similar to memchr(): it assumes  (i.e.,
//       the  programmer knows for certain) that an instance of c lies some
//       where in the memory area starting at the location pointed to by  s,
//       and  so performs an optimized search for c (i.e., no use of a count
//       argument to limit the range of the search).  If an instance of c is
//       not  found, the results are unpredictable.  The following call is a
//       fast means of locating a string's terminating null byte:
//
//           char *p = rawmemchr(s, '\0');
//
//RETURN VALUE
//       The memchr() and memrchr() functions return a pointer to the match
//       ing  byte or NULL if the character does not occur in the given mem
//       ory area.
//
//       The rawmemchr() function returns a pointer to the matching byte, if
//       one is found.  If no matching byte is found, the result is unspeci
//       fied.
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*v_s;
	unsigned char		v_c;
	size_t				i;

	if (!s)
		return (NULL);
	v_s = (const unsigned char *)s;
	v_c = (unsigned char)c;
	i = 0;
	while (i < n && v_s[i] != v_c)
		i++;
	if (v_s[i] == v_c)
		return ((void *)&v_s[i]);
	return (NULL);
}

//
//int main() {
//	const char str[] = "0123456789";
//	const char *result = ft_memchr(str, '5', 5);
//
//	if (result != NULL) {
//		printf("found: %s", result);
//	} else {
//		printf("not found in the string.\n");
//	}
//
//	return 0;
//}