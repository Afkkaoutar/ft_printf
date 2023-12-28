/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexupper.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaafkhar <kaafkhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 06:15:55 by kaafkhar          #+#    #+#             */
/*   Updated: 2023/12/27 06:16:18 by kaafkhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_puthexupper(unsigned int nb)
{
    int i = 0;
    char *str = "0123456789ABCDEF";
    
    if(nb > 16)
        ft_puthexupper(nb / 16);
    i += write(1, &str[nb % 16], 1);
    return (i);
}