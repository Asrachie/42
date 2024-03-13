/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooyeonk <sooyeonk@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 23:56:38 by sooyeonk          #+#    #+#             */
/*   Updated: 2024/03/13 23:56:38 by sooyeonk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*v_s;
	size_t			i;

	if (!s || n == 0)
		return (s);
	v_s = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		v_s[i] = c;
		i++;
	}
	return (s);
}
