/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcamilo- <lcamilo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 03:14:34 by lcamilo-          #+#    #+#             */
/*   Updated: 2022/10/25 18:41:46 by lcamilo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>

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
				y += ft_putchar(va_arg(args, int));
			else if (s[i] == 's')
				y += ft_putstr(va_arg(args, char *));
			else if (s[i] == 'p')
			{
				y += ft_putstr("0x");
				y += ft_putnbr_base(va_arg(args, unsigned long long),
						"0123456789abcdef", 16);
			}
			else if (s[i] == 'd' || s[i] == 'i')
				y += ft_putnbr(va_arg(args, int));
			else if (s[i] == 'u')
				y += ft_putunbr(va_arg(args, unsigned int));
			else if (s[i] == 'x')
				y += ft_putnbr_base(va_arg(args, unsigned int),
						"0123456789abcdef", 16);
			else if (s[i] == 'X')
				y += ft_putnbr_base(va_arg(args, unsigned int),
						"0123456789ABCDEF", 16);
			else if (s[i] == '%')
				y += ft_putchar('%');
			if (ft_strchr("cspdiuxX%", s[i]))
				i++;
		}
		else
			y += ft_putchar(s[i++]);
	}
	va_end(args);
	return (y);
}
