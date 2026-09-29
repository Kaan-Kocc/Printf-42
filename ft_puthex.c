/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoc <kkoc@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 19:58:28 by kkoc              #+#    #+#             */
/*   Updated: 2026/09/29 21:57:59 by kkoc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long num, char format)
{
	char	*base;
	int		length;

	length = 0;
	if (format == 'x')
		base = "0123456789abcdef";
	else if (format == 'X')
		base = "0123456789ABCDEF";
	else
		return (0);
	if (num < 16)
		length += ft_putchar(base[num]);
	else
	{
		length += ft_puthex(num / 16, format);
		length += ft_puthex(num % 16, format);
	}
	return (length);
}