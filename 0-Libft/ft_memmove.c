/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooyeonk <sooyeonk@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 23:56:35 by sooyeonk          #+#    #+#             */
/*   Updated: 2024/03/13 23:56:35 by sooyeonk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*v_dest;
	const unsigned char	*v_src;

	if (!dest || !src)
		return (NULL);
	if (dest == src)
		return (dest);
	v_dest = (unsigned char *)dest;
	v_src = (const unsigned char *)src;
	if (v_dest < v_src)
		return (ft_memcpy(dest, src, n));
	while (n > 0)
	{
		n--;
		v_dest[n] = v_src[n];
	}
	return (dest);
}
