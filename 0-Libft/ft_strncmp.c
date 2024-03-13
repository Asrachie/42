/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooyeonk <sooyeonk@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 23:57:25 by sooyeonk          #+#    #+#             */
/*   Updated: 2024/03/13 23:57:25 by sooyeonk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char	*v_s1;
	const unsigned char	*v_s2;
	size_t				i;

	if (!s1 || !s2)
		return (0);
	v_s1 = (const unsigned char *)s1;
	v_s2 = (const unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n && v_s1[i] && v_s2[i] && v_s1[i] == v_s2[i])
		i++;
	if (i == n)
		return (0);
	return (v_s1[i] - v_s2[i]);
}
