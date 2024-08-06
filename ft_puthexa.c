/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgiambon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 11:10:59 by rgiambon          #+#    #+#             */
/*   Updated: 2024/06/29 10:02:42 by rgiambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	ft_print_hex(unsigned int num, const char format)
{
	int	count;

	count = 0;
	if (num >= 16)
	{
		count += ft_print_hex(num / 16, format);
		count += ft_print_hex(num % 16, format);
	}
	else
	{
		if (num <= 9)
			count += ft_putchar_int(num + '0');
		else
		{
			if (format == 'x')
				count += ft_putchar_int(num - 10 + 'a');
			if (format == 'X')
				count += ft_putchar_int(num - 10 + 'A');
		}
	}
	return (count);
}

int	ft_puthexa(unsigned int num, const char format)
{
	int	count;

	count = 0;
	if (num == 0)
		count = write(1, "0", 1);
	else
		count = ft_print_hex(num, format);
	return (count);
}
