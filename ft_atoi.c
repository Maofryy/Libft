/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenhass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 10:01:08 by mbenhass          #+#    #+#             */
/*   Updated: 2018/11/20 14:46:54 by mbenhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_calcint(char *s, long res, long i, int sign)
{
	while (s[i] <= '9' && s[i] >= '0')
	{
		if (res * 10 + s[i] - '0' > 2147483648)
		{
			if (sign == 1)
				return (-1);
			else if (sign == -1)
				return (0);
		}
		res = res * 10 + s[i] - '0';
		i++;
	}
	return (sign * res);
}

int		ft_atoi(const char *str)
{
	long	i;
	long	res;
	int		sign;
	char	*s;

	i = 0;
	res = 0;
	sign = 1;
	s = (char *)str;
	if (*s == '\0')
		return (0);
	while ((s[i] == '\n') || (s[i] == '\t') || (s[i] == '\v')
	|| (s[i] == ' ') || (s[i] == '\f') || (s[i] == '\r'))
		i++;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
		{
			sign = -1;
		}
		i++;
	}
	return (ft_calcint(s, res, i, sign));
}
