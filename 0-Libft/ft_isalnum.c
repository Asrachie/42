#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

#include <stdio.h>
int main(void)
{
	int	i;
	i = 0;
	while (i <= 127)
	{
		printf("%d   %d\n", i, ft_isalnum(i));
		i++;
	}
	return (0);
}