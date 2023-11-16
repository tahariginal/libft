/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkoulal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 01:36:44 by tkoulal           #+#    #+#             */
/*   Updated: 2023/11/04 17:07:03 by tkoulal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_overflow(unsigned long long n, int sign)
{
	if (n > LLONG_MAX && sign > 0)
		return (-1);
	if (n > LLONG_MAX && sign < 0)
		return (0);
	else
		return (1);
}

int	ft_atoi(const char *s)
{
	int					i;
	int					sign;
	unsigned long long	n;

	n = 0;
	i = 0;
	sign = 1;
	while ((s[i] >= 9 && s[i] <= 13) || s[i] == 32)
		i++;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign = -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		n *= 10;
		n += s[i] - 48;
		if (check_overflow(n, sign) <= 0)
			return (check_overflow(n, sign));
		i++;
	}
	return (n * sign);
}
