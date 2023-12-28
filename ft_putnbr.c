/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaafkhar <kaafkhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 06:14:24 by kaafkhar          #+#    #+#             */
/*   Updated: 2023/12/27 06:31:48 by kaafkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h" 

int  ft_putnbr(int nb)
{
  int  i;

  i = 0;
  if (nb == -2147483648)
  {
    i += ft_putchar('-');
    i += ft_putchar('2');
    nb = 147483648;
  }
  if (nb < 0)
  {
    nb = nb * (-1);
    i += ft_putchar('-');
  }
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