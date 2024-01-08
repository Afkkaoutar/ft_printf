/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexupper.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaafkhar <kaafkhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 06:15:55 by kaafkhar          #+#    #+#             */
/*   Updated: 2023/12/28 21:12:25 by kaafkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexupper(unsigned int nb)
{
	int		i;
	char	*x;

	x = "0123456789ABCDEF";
	i = 0;
	if (nb < 16)
	{
		i += ft_putchar(x[nb]);
	}
	else
	{
		i += ft_puthexupper(nb / 16);
		i += ft_putchar(x[nb % 16]);
	}
	return (i);
}
