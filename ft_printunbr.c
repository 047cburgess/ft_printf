/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caburges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 11:37:59 by caburges          #+#    #+#             */
/*   Updated: 2024/11/22 20:10:12 by caburges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	put_unbr(unsigned int nbr)
{
	if (nbr >= 10)
		put_unbr(nbr / 10);
	ft_putchar_fd(nbr % 10 + 48, 1);
}

int	ft_printunbr(unsigned int nbr)
{
	int	num_len;

	put_unbr(nbr);
	if (nbr == 0)
	{
		num_len = 1;
		return (num_len);
	}
	num_len = 0;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		num_len++;
	}
	return (num_len);
}
