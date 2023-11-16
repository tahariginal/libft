/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkoulal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:27:06 by tkoulal           #+#    #+#             */
/*   Updated: 2023/11/09 18:27:08 by tkoulal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_count(long long n)
{
	int	c;

	c = 0;
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		c++;
		n *= -1;
	}
	while (n > 0)
	{
		c++;
		n /= 10;
	}
	return (c);
}

char	*ft_itoa(int n)
{
	int		len;
	long	nn;
	char	*new;

	nn = n;
	len = len_count(nn);
	new = malloc(sizeof(char) * (len + 1));
	if (!new)
		return (NULL);
	new[len--] = '\0';
	if (nn == 0)
	{
		new[0] = '0';
	}
	if (nn < 0)
	{
		new[0] = '-';
		nn *= -1;
	}
	while (nn > 0)
	{
		new[len--] = (nn % 10) + 48;
		nn /= 10;
	}
	return (new);
}
