//NAME
//       memmove - copy memory area
//
//SYNOPSIS
//       #include <string.h>
//
//       void *memmove(void *dest, const void *src, size_t n);
//
//DESCRIPTION
//       The  memmove() function copies n bytes from memory area src to mem
//       ory area dest.  The memory areas may overlap: copying  takes  place
//       as  though the bytes in src are first copied into a temporary array
//       that does not overlap src or dest, and the bytes  are  then  copied
//       from the temporary array to dest.
//
//RETURN VALUE
//       The memmove() function returns a pointer to dest.

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*v_dest;
	const unsigned char	*v_src;

	v_dest = (unsigned char *)dest;
	v_src = (const unsigned char *)src;
	if (v_dest < v_src)
		return (ft_memcpy(dest, src, n));
	while (n > 0)
	{
		n--;
		v_dest[n] = v_src[n];
	}
	return (dest);
}

//int main() {
//	char des[10];
//	char str[10] = "1234567890";
//
//	ft_memmove(des, str, 5);
//	printf("%s\n", des);
//
//	return 0;
//}