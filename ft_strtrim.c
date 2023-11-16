/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkoulal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:29:18 by tkoulal           #+#    #+#             */
/*   Updated: 2023/11/10 03:25:28 by tkoulal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*new;

	if (s1 == NULL || set == NULL || !*s1)
		return (ft_strdup(""));
	start = 0;
	end = ft_strlen(s1) - 1;
	len = 0;
	while (ft_strchr(set, s1[start]) && start <= end)
		start++;
	if (start > end)
		return (ft_strdup(""));
	while (ft_strchr(set, s1[end]) && end > 0)
		end--;
	len = end - start + 2;
	new = malloc(sizeof(char) * len);
	if (!new)
		return (NULL);
	ft_strlcpy(new, (s1 + start), len);
	return (new);
}
