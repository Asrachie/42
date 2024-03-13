#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*end;

	end = s + ft_strlen(s);
	while (end >= s)
	{
		if (*end == c)
			return ((char *)end);
		end--;
	}
	return (NULL);
}
