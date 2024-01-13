/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaafkhar <kaafkhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 08:20:05 by kaafkhar          #+#    #+#             */
/*   Updated: 2024/01/13 04:45:28 by kaafkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check(char c)
{
	if (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i'
		|| c == 'u' || c == 'x' || c == 'X' || c == '%')
		return (1);
	return (0);
}

int	ft_printf1(char f, va_list pt)
{
	int	i;

	i = 0;
	if (f == 'c')
		i += ft_putchar(va_arg(pt, int));
	else if (f == 's')
		i += ft_putstr(va_arg(pt, char *));
	else if (f == 'p')
	{
		i += write(1, "0x", 2);
		i += ft_puthex(va_arg(pt, unsigned long));
	}
	else if (f == 'd')
		i += ft_putnbr(va_arg(pt, int));
	else if (f == 'i')
		i += ft_putnbr(va_arg(pt, int));
	else if (f == 'u')
		i += ft_putnbrp(va_arg(pt, unsigned int));
	else if (f == 'x')
		i += ft_puthex(va_arg(pt, unsigned int));
	else if (f == 'X')
		i += ft_puthexupper(va_arg(pt, unsigned int));
	else if (f == '%')
		i += write(1, "%", 1);
	return (i);
}

int	ft_printf(const char *c, ...)
{
	va_list	l;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(l, c);
	while (c[i])
	{
		if (c[i] == '%' && c[i + 1] == '\0')
			break ;
		if (c[i] != '%')
			len += ft_putchar(c[i]);
		else if (c[i] == '%' && check(c[i + 1]) == 1)
		{
			len += ft_printf1(c[i + 1], l);
			i++;
		}
		i++;
	}
	va_end(l);
	return (len);
}
