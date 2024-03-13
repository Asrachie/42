#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*v_s;
	size_t	len;

	if (!s)
		return (NULL);
	len = ft_strlen(s) + 1;
	v_s = (char *)malloc(len);
	if (!v_s)
		return (NULL);
	ft_memcpy(v_s, s, len);
	return (v_s);
}
