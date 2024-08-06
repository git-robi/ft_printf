/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress_int.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgiambon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 16:12:02 by rgiambon          #+#    #+#             */
/*   Updated: 2024/06/29 10:33:42 by rgiambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_address(unsigned long n, char *hexa)
{
	int	count;

	count = 0;
	if (n >= 16)
		count += print_address(n / 16, hexa);
	count += ft_putchar_int(hexa[n % 16]);
	return (count);
}

int	ft_putaddress_int(void *p, char *hexa)
{
	int	count;

	count = 0;
	if (p == 0)
		return (ft_putstr_int("(nil)"));
	count += ft_putstr_int("0x");
	count += print_address((unsigned long)p, hexa);
	return (count);
}
