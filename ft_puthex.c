/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaafkhar <kaafkhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 06:15:13 by kaafkhar          #+#    #+#             */
/*   Updated: 2023/12/27 06:15:32 by kaafkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_puthex(unsigned long nb)
{
    int i = 0;
    char *str = "0123456789abcdef";
    
    if (nb > 16)
        i += ft_puthex(nb / 16);
    i += write(1, &str[nb % 16], 1);
    return (i);
}