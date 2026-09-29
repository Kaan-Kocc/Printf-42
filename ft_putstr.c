/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoc <kkoc@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 19:55:05 by kkoc              #+#    #+#             */
/*   Updated: 2026/09/29 21:58:03 by kkoc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int length;

	length = 0;
	if (!str)
		str = "(null)";
	while (*str)
	{
		ft_putchar(*str);
		str++;
		length++;
	}
	return(length);
}