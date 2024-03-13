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
	while (i < n && v_s1[i] && v_s2[i] && v_s1[i] == v_s2[i])
		i++;
	if (i == n)
		return (0);
	return (v_s1[i] - v_s2[i]);
}
