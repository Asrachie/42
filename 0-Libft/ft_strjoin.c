#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	s1_length;
	char	*result;

	if (!s1 || !s2)
		return (NULL);
	s1_length = ft_strlen(s1);
	result = (char *)malloc(sizeof(char) * (s1_length + ft_strlen(s2) + 1));
	if (!result)
		return (NULL);
	i = 0;
	ft_memmove(result, s1, s1_length);
	while (s2[i])
	{
		result[s1_length + i] = s2[i];
		i++;
	}
	result[s1_length + i] = '\0';
	return (result);
}
