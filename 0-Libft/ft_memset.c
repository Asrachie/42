//NAME
//       memset - fill memory with a constant byte
//
//SYNOPSIS
//       #include <string.h>
//
//       void *memset(void *s, int c, size_t n);
//
//DESCRIPTION
//       The  memset() function fills the first n bytes of the memory area
//       pointed to by s with the constant byte c.
//
//RETURN VALUE
//       The memset() function returns a pointer to the memory area s.

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*v_s;
	size_t			i;

	v_s = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		v_s[i] = c;
		i++;
	}
	return (s);
}

//int main(void)
//{
//	char a[10];
//	printf("%s\n", (char *)ft_memset(a, '1', 5));
//	return (0);
//}