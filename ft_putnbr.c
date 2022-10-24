/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcamilo- <lcamilo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 23:37:34 by lcamilo-          #+#    #+#             */
/*   Updated: 2022/10/24 20:56:42 by lcamilo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	putnbr(unsigned int n)
{
	unsigned int	nb;
	int				i;

	i = 0;
	nb = n;
	if (n > 9)
		putnbr(n / 10);
	i += ft_putchar(nb % 10 + '0');
	return (i);
}

int	ft_putnbr(int n)
{
	int	negative;

	negative = 1;
	if (n < 0)
	{
		ft_putchar('-');
		negative *= -1;
	}
	return (putnbr(n * negative));
}
