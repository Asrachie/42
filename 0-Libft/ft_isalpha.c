#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

//#include <stdio.h>
//int main(void)
//{
//	int	i;
//	i = 0;
//	while (i <= 127)
//	{
//		printf("%d   %d\n", i, ft_isalpha(i));
//		i++;
//	}
//	return (0);
//}