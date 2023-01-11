/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhos <yhos@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 01:04:10 by yhos              #+#    #+#             */
/*   Updated: 2023/01/09 01:24:09 by yhos             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (src == 0 && dst == 0)
		return (0);
	if ((unsigned long int)dst - (unsigned long int)src >= len)
	{
		while (i < len)
		{
			*(char *)(dst + i) = *(char *)(src + i);
			i++;
		}
	}
	else
	{
		while (i < len)
		{
			*(char *)(dst + (len - 1 - i)) = *(char *)(src + (len - 1 - i));
			i++;
		}
	}
	return (dst);
}
