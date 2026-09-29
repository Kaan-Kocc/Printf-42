/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoc <kkoc@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 21:24:27 by kkoc              #+#    #+#             */
/*   Updated: 2026/09/29 21:24:27 by kkoc             ###   ########.fr       */
/*                                                                            */

/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(unsigned long p)
{
	int	length;

	length = 0;
	length += ft_putstr("0x");
	length += ft_puthex(p, 'x');
	return (length);
}