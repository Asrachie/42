#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*v_dest;
	const unsigned char	*v_src;
	size_t				i;

	if (!dest || !src)
		return (NULL);
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
