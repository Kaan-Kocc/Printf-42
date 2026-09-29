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

int	ft_putptr(void *ptr)
{
	int				length;
	unsigned long	p;

	length = 0;
	if (!ptr)
		return (write(1, "(nil)", 5));
	p = (unsigned long)ptr;
	length += ft_putstr("0x");
	length += ft_puthex(p, 'x');
	return (length);
}