/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaafkhar <kaafkhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 06:16:41 by kaafkhar          #+#    #+#             */
/*   Updated: 2023/12/28 21:11:31 by kaafkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbrp(unsigned int nb)
{
	int	i;

	i = 0;
	if (nb <= 9)
	{
		i += ft_putchar(nb + 48);
	}
	else
	{
		i += ft_putnbr(nb / 10);
		i += ft_putchar((nb % 10) + '0');
	}
	return (i);
}
