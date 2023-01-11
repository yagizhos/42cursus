/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhos <yhos@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 03:53:17 by yhos              #+#    #+#             */
/*   Updated: 2023/01/09 11:08:00 by yhos             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*r;
	size_t	i;

	if (!s)
		return (0);
	else if (start > ft_strlen(s))
		return (ft_strdup(""));
	else if (start + len > ft_strlen(s))
		len = ft_strlen(s) - start;
	r = malloc(sizeof(char) * (len + 1));
	if (!r)
		return (NULL);
	i = -1;
	while (++i < len)
		r[i] = s[start + i];
	r[i] = '\0';
	return (r);
}
