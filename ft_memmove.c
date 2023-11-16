/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkoulal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 00:02:36 by tkoulal           #+#    #+#             */
/*   Updated: 2023/11/03 01:02:52 by tkoulal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if ((NULL == dst && NULL == src))
		return (NULL);
	if (dst == src)
		return (dst);
	if ((dst > src))
	{
		while (len--)
			*((t_byte *)dst + len) = *((t_byte *)src + len);
	}
	else
	{
		ft_memcpy(dst, src, len);
	}
	return (dst);
}
