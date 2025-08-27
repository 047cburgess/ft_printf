/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printaddress.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caburges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 14:59:26 by caburges          #+#    #+#             */
/*   Updated: 2024/11/25 15:24:39 by caburges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printaddress(void *address)
{
	int					chars_printed;
	unsigned long		casted_address;

	if (address == NULL)
	{
		chars_printed = ft_printstr("(nil)");
		return (chars_printed);
	}
	casted_address = (unsigned long)address;
	chars_printed = ft_printstr("0x");
	chars_printed += ft_printhex(casted_address, 'x');
	return (chars_printed);
}
