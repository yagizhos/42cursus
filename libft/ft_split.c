/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhos <yhos@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 12:19:54 by yhos              #+#    #+#             */
/*   Updated: 2023/01/10 18:23:30 by yhos             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_strs(char *s, char c)
{
	int	i;
	int	str_count;

	i = 0;
	str_count = 0;
	while (s[i])
	{
		if (i == 0 && s[i] != c)
			str_count++;
		if (s[i] == c && s[i + 1] != c && s[i + 1] != 0)
			str_count++;
		i++;
	}
	return (str_count);
}

static void	free_all(char ***buffer)
{
	int	i;

	i = 0;
	while ((*buffer)[i])
	{
		free((*buffer)[i]);
		i++;
	}
	ft_bzero(*buffer, i);
	free(*buffer);
	*buffer = 0;
}

static int	insert_str(char **buffer, char *src, size_t len)
{
	int	j;

	j = 0;
	while (buffer[j])
		j++;
	buffer[j] = ft_substr(src, 0, len);
	if (!buffer[j])
	{
		free_all(&buffer);
		return (0);
	}
	return (len);
}

static char	**construct(char **buffer, char *s, char c)
{
	size_t	start;
	size_t	i;

	start = 0;
	i = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i])
			start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > start)
			if (!insert_str(buffer, (s + start), (i - start)))
				return (0);
		while (s[i] && s[i] == c)
			i++;
	}
	return (buffer);
}

char	**ft_split(char const *s, char c)
{
	char	**buffer;
	int		str_count;

	if (!s)
		return (0);
	buffer = 0;
	str_count = count_strs((char *)s, c);
	buffer = (char **)ft_calloc((str_count + 1), sizeof(char *));
	if (!buffer)
		return (0);
	if (!construct(buffer, (char *)s, c))
	{
		free_all(&buffer);
		return (0);
	}
	return (buffer);
}
