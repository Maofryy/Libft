/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenhass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 17:58:59 by mbenhass          #+#    #+#             */
/*   Updated: 2018/11/13 18:07:56 by mbenhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;
	char	*str1;
	char	*str2;
	size_t	i;

	i = 0;
	if (s1 == NULL || s2 == NULL || (ret = ft_strdup(s1)) == NULL)
		return (NULL);
	ret = ft_strcat(ret, s2);
	return (ret);
}
