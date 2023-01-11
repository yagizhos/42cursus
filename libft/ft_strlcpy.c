/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhos <yhos@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 01:12:59 by yhos              #+#    #+#             */
/*   Updated: 2023/01/09 11:06:58 by yhos             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0u;
	while (*src != '\0')
	{
		if (i++ + 1 < dstsize)
			*dst++ = *src;
		src++;
	}
	if (dstsize != 0)
		*dst = '\0';
	return (i);
}
