#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*result;

	if (!s)
		return (NULL);
	else if (start >= ft_strlen(s))
		return (ft_strdup(""));
	result = (char *)malloc((len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		result[i] = s[start + i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

//int main() {
//	const char *s = "a0123456789a";
//	unsigned int start = 7;
//	size_t len = 5;
//	char *substring;
//
//	substring = ft_substr(s, start, len);
//
//	if (substring != NULL) {
//		printf("Substring: %s\n", substring);
//	} else {
//		printf("Substring is NULL.\n");
//	}
//
//	free(substring);
//
//	return 0;
//}