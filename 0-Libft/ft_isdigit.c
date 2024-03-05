#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

//#include <stdio.h>
//int main(void)
//{
//	int	i;
//	i = 0;
//	while (i <= 127)
//	{
//		printf("%d   %d\n", i, ft_isdigit(i));
//		i++;
//	}
//	return (0);
//}