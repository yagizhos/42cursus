/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhos <yhos@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 01:16:32 by yhos              #+#    #+#             */
/*   Updated: 2023/01/09 18:29:08 by yhos             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	if (!dstsize)
		return (ft_strlen(src));
	i = 0;
	while (dst[i] && i < dstsize)
		i++;
	j = -1;
	while (src[++j] && i + j + 1 < dstsize)
		dst[i + j] = src[j];
	if (i != dstsize)
		dst[i + j] = 0;
	return (i + ft_strlen(src));
}
