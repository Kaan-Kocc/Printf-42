/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoc <kkoc@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 21:16:44 by kkoc              #+#    #+#             */
/*   Updated: 2026/09/29 22:23:24 by kkoc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	long	nb;
	int		length;

	nb = n;
	length = 0;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		length++;
	}
	if (nb < 10)
	{
		ft_putchar(nb + '0');
		length++;
	}
	else
	{
		length += ft_putnbr(nb / 10);
		length += ft_putnbr(nb % 10);
	}
	return (length);
}
