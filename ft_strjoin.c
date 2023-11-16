/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkoulal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 23:59:06 by tkoulal           #+#    #+#             */
/*   Updated: 2023/11/05 23:59:08 by tkoulal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*copy(char const *s1, char const *s2, char *dest)
{
	while (*s1)
	{
		*dest = *(char *)s1;
		dest++;
		s1++;
	}
	while (*s2)
	{
		*dest = *(char *)s2;
		dest++;
		s2++;
	}
	*dest = '\0';
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	lenth_of_s1;
	size_t	lenth_of_s2;
	char	*str;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	lenth_of_s1 = ft_strlen(s1);
	lenth_of_s2 = ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (lenth_of_s1 + lenth_of_s2 + 1));
	if (str == NULL)
		return (NULL);
	copy(s1, s2, str);
	return (str);
}
