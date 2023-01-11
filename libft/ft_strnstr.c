/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhos <yhos@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 04:33:28 by yhos              #+#    #+#             */
/*   Updated: 2023/01/09 16:57:11 by yhos             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (!*needle)
		return ((char *) haystack);
	if (len > 0)
	{
		while (haystack[i] && i < len)
		{
			j = 0;
			while (haystack[i + j] == needle[j] && i + j < len)
			{
				j++;
				if (!needle[j])
					return ((char *) &haystack[i]);
			}
			i++;
		}
	}
	return (0);
}
