/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenhass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 15:35:05 by mbenhass          #+#    #+#             */
/*   Updated: 2018/11/21 12:24:52 by mbenhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	str = (char *)s;
	i = 0;
	while (str[i] && (unsigned char)str[i] != (unsigned char)c && i < n)
		i++;
	if ((unsigned char)str[i] == (unsigned char)c)
		return (&str[i]);
	else
		return (NULL);
}
