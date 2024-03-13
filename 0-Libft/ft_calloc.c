#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*result;
	size_t	total_size;

	total_size = nmemb * size;
	if (size && nmemb != total_size / size)
		return (NULL);
	result = (void *)malloc(total_size);
	if (result)
		return (ft_memset(result, 0, total_size));
	return (NULL);
}
