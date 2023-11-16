/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkoulal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:00:59 by tkoulal           #+#    #+#             */
/*   Updated: 2023/11/13 14:16:15 by tkoulal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_strings(char const *s, char sep)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == sep)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != sep)
			i++;
	}
	return (count);
}

static int	seplen(char const *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
	{
		i++;
	}
	return (i);
}

static char	**ft_free(char **str, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	size_t	i;
	size_t	index;
	int		count_string;
	char	**new;

	if (!s)
		return (NULL);
	count_string = count_strings(s, c);
	new = malloc(sizeof(char *) * (count_string + 1));
	if (!new)
		return (NULL);
	i = 0;
	index = 0;
	while (count_string--)
	{
		while (s[index] && s[index] == c)
			index++;
		new[i] = ft_substr(s, index, seplen((s + index), c));
		if (new[i] == NULL)
			return (ft_free(new, i));
		i++;
		index += seplen((s + index), c);
	}
	new[i] = NULL;
	return (new);
}
