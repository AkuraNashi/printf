/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcamilo- <lcamilo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 23:37:34 by lcamilo-          #+#    #+#             */
/*   Updated: 2022/10/24 21:30:01 by lcamilo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	putnbr_base(unsigned int n, char *base, int size)
{
	unsigned int	nb;
	int				i;

	i = 0;
	nb = n;
	if (n >= size)
	{
		putnbr_base(n / size, base, size);
	}
	i += ft_putchar(base[nb % size]);
	return (i);
}

int	ft_putnbr_base(int n, char *base, int nb)
{
	if (n < 0)
		return (putnbr_base(n * -1, base, nb) + 1);
	return (putnbr_base(n, base, nb));
}
