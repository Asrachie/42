#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*v_s1;
	const unsigned char	*v_s2;

	if (n == 0)
		return (0);
	v_s1 = (const unsigned char *)s1;
	v_s2 = (const unsigned char *)s2;
	while (n)
	{
		if (*v_s1 != *v_s2)
			return (*v_s1 - *v_s2);
		v_s1++;
		v_s2++;
		n--;
	}
	return (0);
}
