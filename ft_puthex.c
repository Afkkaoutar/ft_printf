/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaafkhar <kaafkhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 06:15:13 by kaafkhar          #+#    #+#             */
/*   Updated: 2023/12/28 21:12:20 by kaafkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long nb)
{
	int		i;
	char	*x;

	x = "0123456789abcdef";
	i = 0;
	if (nb < 16)
	{
		i += ft_putchar(x[nb]);
	}
	else
	{
		i += ft_puthex(nb / 16);
		i += ft_putchar(x[nb % 16]);
	}
	return (i);
}
