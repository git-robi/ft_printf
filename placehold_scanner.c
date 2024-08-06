/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   placehold_scanner.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgiambon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 15:30:26 by rgiambon          #+#    #+#             */
/*   Updated: 2024/06/29 10:36:58 by rgiambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	placeholder_scanner(char c, va_list *arg)
{
	if (c == 'c')
		return (ft_putchar_int((char)va_arg(*arg, int)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr_int((int)va_arg(*arg, int)));
	else if (c == 's')
		return (ft_putstr_int((char *)va_arg(*arg, char *)));
	else if (c == '%')
		return (ft_putchar_int('%'));
	else if (c == 'u')
		return (ft_putnbr_u_int((unsigned int)va_arg(*arg, unsigned int)));
	else if (c == 'x')
		return (ft_puthexa(va_arg(*arg, unsigned int), c));
	else if (c == 'X')
		return (ft_puthexa(va_arg(*arg, unsigned int), c));
	else if (c == 'p')
		return (ft_putaddress_int(va_arg(*arg, void *), "0123456789abcdef"));
	return (0);
}
