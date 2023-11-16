/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkoulal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 21:00:43 by tkoulal           #+#    #+#             */
/*   Updated: 2023/11/13 14:19:16 by tkoulal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	bytes;
	void	*new_str;

	if (count && (SIZE_MAX / count < size))
		return (NULL);
	bytes = count * size;
	new_str = malloc(bytes);
	if (new_str == NULL)
		return (NULL);
	ft_bzero(new_str, bytes);
	return (new_str);
}
