/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgiambon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 09:14:54 by rgiambon          #+#    #+#             */
/*   Updated: 2024/06/29 10:45:06 by rgiambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		print_chars;
	int		i;

	i = 0;
	va_start(arg, str);
	print_chars = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			print_chars += placeholder_scanner(str[i + 1], &arg);
			i++;
		}
		else
			print_chars += ft_putchar_int(str[i]);
		i++;
	}
	va_end(arg);
	return (print_chars);
}
