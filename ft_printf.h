/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgiambon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 14:12:26 by rgiambon          #+#    #+#             */
/*   Updated: 2024/06/29 10:41:06 by rgiambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>

int		ft_printf(const char *str, ...);
int		ft_putchar_int(char c);
int		ft_putnbr_int(int n);
int		ft_putstr_int(char *s);
int		placeholder_scanner(char c, va_list *arg);
int		ft_putnbr_u_int(unsigned int n);
int		ft_putaddress_int(void *p, char *hexa);
int		ft_puthexa(unsigned int num, const char format);

#endif
