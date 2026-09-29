/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoc <kkoc@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 19:51:56 by kkoc              #+#    #+#             */
/*   Updated: 2026/09/29 23:05:42 by kkoc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	ft_putchar(char c);
int	ft_puthex(unsigned long num, char format);
int	ft_putnbr(int n);
int	ft_putptr(void *ptr);
int	ft_putstr(char *str);
int	ft_putunsigned(unsigned int n);

#endif