#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	index;
	size_t	last_index;

	if (!s1 || !set)
		return (NULL);
	index = 0;
	last_index = ft_strlen(s1);
	while (ft_strchr(set, s1[index]) && s1[index])
		index++;
	while (ft_strchr(set, s1[last_index - 1]) && last_index > index)
		last_index--;
	return (ft_substr(s1, index, last_index - index));
}
