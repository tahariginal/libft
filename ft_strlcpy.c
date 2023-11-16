/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkoulal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 19:35:39 by tkoulal           #+#    #+#             */
/*   Updated: 2023/11/05 15:39:24 by tkoulal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len_of_src;

	len_of_src = ft_strlen(src);
	if (dst == NULL || src == NULL || !dstsize)
		return (len_of_src);
	while (*src && --dstsize)
	{
		*dst++ = *src++;
	}
	*dst = '\0';
	return (len_of_src);
}
