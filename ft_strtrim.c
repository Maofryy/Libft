/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenhass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 18:08:31 by mbenhass          #+#    #+#             */
/*   Updated: 2018/11/13 18:26:34 by mbenhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		is_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	else
		return (0);
}

char	*ft_strtrim(char const *s)
{
	char	*ret;
	char	*str;
	size_t	i;
	size_t	j;
	size_t	k;

	if (s == NULL)
		return (NULL);
	i = 0;
	j = 0;
	k = 0;
	str = (char *)s;
	k = ft_strlen(str);
	while (is_space(str[j]) && str[j])
		j++;
	k--;
	while (is_space(str[k]) && str[k])
		k--;
	if (j == k)
		return ("");
	if ((ret = ft_memalloc(k - j + 2)) == NULL)
		return (NULL);
	while (str[j] && j <= k)
		ret[i++] = str[j++];
	ret[i] = '\0';
	return (ret);
}
