/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caburges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 15:29:04 by caburges          #+#    #+#             */
/*   Updated: 2024/11/25 16:59:14 by caburges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	puthex(unsigned long nbr, char *base)
{
	if (nbr >= 16)
		puthex(nbr / 16, base);
	ft_printchar(base[nbr % 16]);
}

int	ft_printhex(unsigned long nbr, char format)
{
	int	chars_printed;

	if (format == 'X')
		puthex(nbr, "0123456789ABCDEF");
	else
		puthex(nbr, "0123456789abcdef");
	if (nbr == 0)
		return (1);
	chars_printed = 0;
	while (nbr != 0)
	{
		nbr = nbr / 16;
		chars_printed++;
	}
	return (chars_printed);
}
