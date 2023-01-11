/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhos <yhos@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 03:44:59 by yhos              #+#    #+#             */
/*   Updated: 2023/01/09 10:53:30 by yhos             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digit_count(int n)
{
	long int	l;
	int			digits;

	l = n;
	digits = 1;
	if (n < 0)
	{
		digits++;
		l *= -1;
	}
	while (l >= 10)
	{
		l /= 10;
		digits++;
	}
	return (digits);
}

char	*ft_itoa(int n)
{
	char		*s;
	long int	l;
	int			i;

	i = digit_count(n);
	s = malloc(sizeof(char) * (i + 1));
	if (!s)
		return (0);
	s[i--] = '\0';
	l = n;
	if (n < 0)
	{
		s[0] = '-';
		l *= -1;
	}
	while (l >= 10)
	{
		s[i--] = (l % 10) + '0';
		l /= 10;
	}
	s[i] = l + '0';
	return (s);
}
