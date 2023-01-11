/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhos <yhos@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 04:02:40 by yhos              #+#    #+#             */
/*   Updated: 2023/01/09 14:50:09 by yhos             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*c;
	void	*p;

	if (!count || !size)
	{
		c = malloc(sizeof(char));
		if (!c)
			return (0);
		*c = 0;
		return (c);
	}
	if (count > SIZE_MAX / size)
		return (0);
	p = malloc(size * count);
	if (!p)
		return (0);
	ft_bzero(p, size * count);
	return (p);
}
