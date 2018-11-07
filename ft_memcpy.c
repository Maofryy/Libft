/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenhass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 10:27:41 by mbenhass          #+#    #+#             */
/*   Updated: 2018/11/07 12:02:30 by mbenhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;
	char *cpy;
	char *str;

	cpy = dst;
	str = (char *)src;
	i = 0;
	while (i < n)
	{
		if (!cpy[i])
			return (NULL);
		cpy[i] = str[i];
		i++;
	}
	return (dst);
}
