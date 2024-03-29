/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooyeonk <sooyeonk@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 23:57:22 by sooyeonk          #+#    #+#             */
/*   Updated: 2024/03/13 23:57:22 by sooyeonk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*v_s;
	size_t	i;

	if (!s || !f)
		return (NULL);
	v_s = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!v_s)
		return (NULL);
	i = 0;
	while (s[i])
	{
		v_s[i] = f(i, s[i]);
		i++;
	}
	v_s[i] = '\0';
	return (v_s);
}
