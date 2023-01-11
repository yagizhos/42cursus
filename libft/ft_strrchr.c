/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhos <yhos@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 23:15:50 by yhos              #+#    #+#             */
/*   Updated: 2022/12/27 23:16:12 by yhos             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	c = (unsigned char)c;
	len = ft_strlen(s);
	if (c == 0)
		return ((char *)s + len);
	while (len-- > 0)
	{
		if (s[len] == c)
			return ((char *)s + len);
	}
	return (0);
}
