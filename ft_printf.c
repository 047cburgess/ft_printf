/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caburges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 12:29:45 by caburges          #+#    #+#             */
/*   Updated: 2024/11/25 12:18:32 by caburges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	ft_printformat(va_list args, char format)
{
	int	chars_printed;

	chars_printed = 0;
	if (format == 'i' || format == 'd')
		chars_printed = ft_printnbr(va_arg(args, int));
	else if (format == 'c')
		chars_printed = ft_printchar(va_arg(args, int));
	else if (format == 's')
		chars_printed = ft_printstr(va_arg(args, char *));
	else if (format == '%')
		chars_printed = ft_printchar('%');
	else if (format == 'u')
		chars_printed = ft_printunbr(va_arg(args, unsigned int));
	else if (format == 'p')
		chars_printed = ft_printaddress(va_arg(args, void *));
	else if (format == 'x' || format == 'X')
		chars_printed = ft_printhex(va_arg(args, unsigned int), format);
	return (chars_printed);
}

int	ft_printf(const char *str, ...)
{
	size_t	chars_printed;
	va_list	args;

	chars_printed = 0;
	if (str == NULL)
		return (-1);
	va_start(args, str);
	while (*str != '\0')
	{
		if (*str == '%' && ft_strchr("idcsupxX%", *(str + 1)))
		{
			chars_printed += ft_printformat(args, *(str + 1));
			str += 2;
		}
		else
		{
			chars_printed += ft_printchar(*str);
			str++;
		}
	}
	va_end(args);
	return (chars_printed);
}
