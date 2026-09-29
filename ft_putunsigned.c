/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoc <kkoc@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 21:48:33 by kkoc              #+#    #+#             */
/*   Updated: 2026/09/29 22:23:22 by kkoc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned(unsigned int n)
{
	int	length;

	length = 0;
	if (n < 10)
	{
		length += ft_putchar(n + '0');
	}
	else
	{
		length += ft_putunsigned(n / 10);
		length += ft_putunsigned(n % 10);
	}
	return (length);
}