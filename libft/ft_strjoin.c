/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhos <yhos@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 04:15:24 by yhos              #+#    #+#             */
/*   Updated: 2023/01/09 17:16:46 by yhos             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*r;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (0);
	if (!ft_strlen(s1) && !ft_strlen(s2))
		return (ft_calloc(1, sizeof(char)));
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	r = malloc(sizeof(char) * (i + j + 1));
	if (!r)
		return (0);
	ft_memcpy(r, s1, i);
	ft_memcpy(r + i, s2, j);
	r[i + j] = 0;
	return (r);
}
