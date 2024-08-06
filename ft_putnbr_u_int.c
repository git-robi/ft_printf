/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u_int.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgiambon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 15:48:28 by rgiambon          #+#    #+#             */
/*   Updated: 2024/06/29 10:35:17 by rgiambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_nb_u(unsigned int n)
{
	char	digit;	

	digit = (n % 10) + '0';
	if (n > 9)
		write_nb_u(n / 10);
	write(1, &digit, 1);
}

int	count_char_u(unsigned int n)
{
	int	count;

	count = 0;
	while (n > 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

int	ft_putnbr_u_int(unsigned int n)
{
	int	count;

	write_nb_u(n);
	count = count_char_u(n);
	return (count);
}
