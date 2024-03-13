/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooyeonk <sooyeonk@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 23:56:25 by sooyeonk          #+#    #+#             */
/*   Updated: 2024/03/13 23:56:25 by sooyeonk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*v_s;
	unsigned char		v_c;
	size_t				i;

	if (!s)
		return (NULL);
	v_s = (const unsigned char *)s;
	v_c = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (v_s[i] == v_c)
			return ((void *)&v_s[i]);
		i++;
	}
	return (NULL);
}
