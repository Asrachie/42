/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sooyeonk <sooyeonk@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 23:57:40 by sooyeonk          #+#    #+#             */
/*   Updated: 2024/03/13 23:57:40 by sooyeonk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start_index;
	size_t	end_index;

	if (!s1 || !set)
		return (NULL);
	start_index = 0;
	end_index = ft_strlen(s1);
	while (ft_strchr(set, s1[start_index]) && s1[start_index])
		start_index++;
	while (ft_strchr(set, s1[end_index - 1]) && end_index > start_index)
		end_index--;
	return (ft_substr(s1, start_index, end_index - start_index));
}
