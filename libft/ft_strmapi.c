/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhos <yhos@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 04:05:30 by yhos              #+#    #+#             */
/*   Updated: 2023/01/09 17:18:12 by yhos             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*r;

	if (!s)
		return (ft_calloc(1, sizeof(char *)));
	r = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!r)
		return (0);
	i = -1;
	while (s[++i])
		r[i] = f(i, s[i]);
	r[i] = 0;
	return (r);
}
