/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcamilo- <lcamilo-@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 20:28:11 by lcamilo-          #+#    #+#             */
/*   Updated: 2022/10/24 03:30:41 by lcamilo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

int		ft_printf(const char *s, ...);
int		ft_putchar(char c);
//int		ft_putnbr(int n);
//int		ft_putstr(char *s);
//size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);

#endif