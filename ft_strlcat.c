/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenhass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 20:11:24 by mbenhass          #+#    #+#             */
/*   Updated: 2018/11/07 17:31:17 by mbenhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t s1;
	size_t s2;

	i = 0;
	s1 = ft_strlen(dst);
	s2 = ft_strlen(src);
	if (size == 0)
		return (s2 - 1);
	if (size - 1 <= s1)
		return (s2 + size);
	while (s1 + i < size - 1)
	{
		dst[s1 + i] = (char)src[i];
		i++;
	}
	dst[i + s1] = '\0';
	return (s1 + s2);
}
