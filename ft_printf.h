/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caburges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 14:09:55 by caburges          #+#    #+#             */
/*   Updated: 2024/11/25 14:39:36 by caburges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"

int	ft_printf(const char *str, ...);
int	ft_printchar(const char c);
int	ft_printstr(char *s);
int	ft_printnbr(int nbr);
int	ft_printunbr(unsigned int nbr);
int	ft_printaddress(void *address);
int	ft_printhex(unsigned long nbr, char format);

#endif
