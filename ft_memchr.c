/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenhass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 15:35:05 by mbenhass          #+#    #+#             */
/*   Updated: 2018/11/20 14:50:47 by mbenhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	str = (char *)s;
	i = 0;
	if (c > 255)
		return (NULL);
	while (str[i] && (unsigned char)str[i] != (unsigned char)c && i < n)
		i++;
	if ((unsigned char)str[i] == (unsigned char)c)
		return (&str[i]);
	else
		return (NULL);
}
