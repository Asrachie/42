//NAME
//       strlen - calculate the length of a string
//
//SYNOPSIS
//       #include <string.h>
//
//       size_t strlen(const char *s);
//
//DESCRIPTION
//       The  strlen()  function calculates the length of the string pointed
//       to by s, excluding the terminating null byte ('\0').
//
//RETURN VALUE
//       The strlen() function returns the number of  bytes  in  the  string
//       pointed to by s.
#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
