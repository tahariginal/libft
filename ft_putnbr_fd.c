/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkoulal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:53:45 by tkoulal           #+#    #+#             */
/*   Updated: 2023/11/09 18:28:09 by tkoulal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nbr;

	nbr = n;
	if (nbr < 0)
	{
		ft_putchar_fd('-', fd);
		nbr *= -1;
	}
	if (nbr >= 0 && nbr <= 9)
		ft_putchar_fd((nbr + 48), fd);
	else
	{
		ft_putnbr_fd((nbr / 10), fd);
		ft_putchar_fd((nbr % 10) + 48, fd);
	}
}
