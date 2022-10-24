/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcamilo- <lcamilo-@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 03:14:34 by lcamilo-          #+#    #+#             */
/*   Updated: 2022/10/24 15:41:28 by lcamilo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		i;
	int		y;

	i = 0;
	y = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			if (s[i] == 'c')
				y += ft_putchar(va_arg(args, int)) - 2;
			else if (s[i] == 's')
				y += ft_putstr(va_arg(args, char *)) - 2;
			else if (s[i] == '%')
				y += ft_putchar('%') - 2;
			if (ft_strchr("%diuxXpocs", s[i]))
				i++;
		}
		if (s[i])
			ft_putchar(s[i++]);
	}
	va_end(args);
	return (i + y);
}
/*
int	main(void)
{
	char s = 'c';
	ft_printf("tttt %c", s);
	return (0);
}
*/