//NAME
//       memcpy - copy memory area
//
//SYNOPSIS
//       #include <string.h>
//
//       void *memcpy(void *dest, const void *src, size_t n);
//
//DESCRIPTION
//       The memcpy() function copies n bytes from memory area src to memory
//       area dest.  The memory areas must not overlap.  Use  memmove(3)  if
//       the memory areas do overlap.
//
//RETURN VALUE
//       The memcpy() function returns a pointer to dest.
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*v_dest;
	const unsigned char	*v_src;
	size_t				i;

	v_dest = (unsigned char *)dest;
	v_src = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		v_dest[i] = v_src[i];
		i++;
	}
	return (dest);
}

//#include <string.h>
//#include <stdio.h>
//int main(void)
//{
//	char src[50] = "example";
//	char dest[50];
//
//	memcpy(dest, src, strlen(src)+1);
//	printf("memcpy: %s\n", dest);
//
//	char src2[50] = "example";
//	char dest2[50];
//
//	ft_memcpy(dest2, src2, strlen(src2)+1);
//	printf("ft_memcpy: %s\n", dest2);
//
//	char src3[50] = "";
//	char dest3[50];
//
//	memcpy(dest3, src3, strlen(src3)+1);
//	printf("memcpy: %s\n", dest3);
//
//	char src4[50] = "";
//	char dest4[50];
//
//	ft_memcpy(dest4, src4, strlen(src4)+1);
//	printf("ft_memcpy: %s\n", dest4);
//	return (0);
//}