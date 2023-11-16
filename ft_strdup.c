/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkoulal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 00:57:01 by tkoulal           #+#    #+#             */
/*   Updated: 2023/11/13 15:31:26 by tkoulal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*new_arr;

	len = ft_strlen(s);
	new_arr = malloc(sizeof(char) * (len + 1));
	if (!new_arr)
		return (NULL);
	ft_strlcpy(new_arr, s, (len + 1));
	return (new_arr);
}
