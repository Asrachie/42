//NAME
//       toupper,  tolower, toupper_l, tolower_l - convert uppercase or low
//       ercase
//
//SYNOPSIS
//       #include <ctype.h>
//
//       int toupper(int c);
//       int tolower(int c);
//
//       int toupper_l(int c, locale_t locale);
//       int tolower_l(int c, locale_t locale);
//
//   Feature Test Macro Requirements for glibc (see feature_test_macros(7)):
//
//       toupper_l(), tolower_l():
//           Since glibc 2.10:
//                  _XOPEN_SOURCE >= 700
//           Before glibc 2.10:
//                  _GNU_SOURCE
//
//DESCRIPTION
//       These functions convert lowercase letters to  uppercase,  and  vice
//       versa.
//
//       If c is a lowercase letter, toupper() returns its uppercase equiva
//       lent, if an uppercase representation exists in the current  locale.
//       Otherwise,  it  returns  c.   The toupper_l() function performs the
//       same task, but uses the locale referred to by the locale handle lo
//       cale.
//
//       If c is an uppercase letter, tolower() returns its lowercase equiv
//       alent, if a lowercase representation exists in the current  locale.
//       Otherwise,  it  returns  c.   The tolower_l() function performs the
//       same task, but uses the locale referred to by the locale handle lo
//       cale.
//
//       If  c  is  neither  an unsigned char value nor EOF, the behavior of
//       these functions is undefined.
//
//       The behavior of toupper_l() and tolower_l() is undefined if  locale
//       is the special locale object LC_GLOBAL_LOCALE (see duplocale(3)) or
//       is not a valid locale object handle.
//
//RETURN VALUE
//       The value returned is that of the converted letter,  or  c  if  the
//       conversion was not possible.
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - ('a' - 'A');
	return (c);
}
