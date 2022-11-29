/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-hid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 01:18:58 by abel-hid          #+#    #+#             */
/*   Updated: 2022/11/25 18:51:19 by abel-hid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_ft(va_list args, char tag, int *i)
{
	if (tag == 'c')
		ft_putchar(va_arg(args, int), i);
	if (tag == 's')
		ft_putstr(va_arg(args, char *), i);
	if (tag == 'd' || tag == 'i')
		ft_putnbr(va_arg(args, int), i);
	if (tag == 'u')
		ft_unsigned(va_arg(args, unsigned int), i);
	if (tag == 'p')
	{
		ft_putstr("0x", i);
		ft_hex_min(va_arg(args, unsigned long), i);
	}
	if (tag == 'x')
		ft_hex_min(va_arg(args, unsigned int ), i);
	if (tag == 'X')
		ft_hex_maj(va_arg(args, unsigned int ), i);
	if (tag == '%')
		ft_putchar('%', i);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		size;
	int		i;

	size = 0;
	i = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			ft_ft(args, s[i], &size);
		}
		else
			ft_putchar(s[i], &size);
			i++;
	}
	va_end(args);
	return (size);
}
