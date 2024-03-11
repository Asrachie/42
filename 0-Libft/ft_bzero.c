//NAME
//       bzero, explicit_bzero - zero a byte string
//
//SYNOPSIS
//       #include <strings.h>
//
//       void bzero(void *s, size_t n);
//
//DESCRIPTION
//       The  bzero()  function erases the data in the n bytes of the memory
//       starting at the location pointed to by s, by writing  zeros  (bytes
//       containing '\0') to that area.
//
//RETURN VALUE
//       None.
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

//int main(void)
//{
//	char a[10];
//	ft_bzero(a, 4);
//	printf("%s\n", a);
//	return (0);
//}