/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkoulal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 20:49:46 by tkoulal           #+#    #+#             */
/*   Updated: 2023/11/05 15:27:38 by tkoulal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	end_of_str;

	end_of_str = ft_strlen(s);
	if (s[end_of_str] == (char)c)
	{
		return ((char *)(s + end_of_str));
	}
	while (end_of_str --)
	{
		if (s[end_of_str] == (char)c)
			return ((char *)(s + end_of_str));
	}
	return (NULL);
}
