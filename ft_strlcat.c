/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkoulal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 14:34:58 by tkoulal           #+#    #+#             */
/*   Updated: 2023/11/09 18:28:34 by tkoulal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	dest_len;
	size_t	src_len;

	src_len = ft_strlen(src);
	if (NULL == dest && 0 == dstsize)
		return (src_len);
	dest_len = ft_strlen(dest);
	if (dest_len >= dstsize)
		return (dstsize + src_len);
	else
		ft_strlcpy(dest + dest_len, src, dstsize - dest_len);
	return (dest_len + src_len);
}
