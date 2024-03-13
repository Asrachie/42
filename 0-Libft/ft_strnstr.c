#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	little_len;
	size_t	max_search_len;

	if (!big || !little)
		return (NULL);
	if (!*little)
		return ((char *)big);
	little_len = ft_strlen(little);
	if (little_len > len)
		return (NULL);
	i = 0;
	max_search_len = len - little_len;
	while (i <= max_search_len && big[i])
	{
		if (!ft_strncmp(&big[i], little, little_len))
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
