/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-hid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 18:51:03 by abel-hid          #+#    #+#             */
/*   Updated: 2022/11/25 18:51:07 by abel-hid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hex_min(unsigned long nbr, int *i)
{
	char	*base;

	base = "0123456789abcdef";
	if (nbr >= 16)
	{
		ft_hex_min(nbr / 16, i);
		ft_hex_min(nbr % 16, i);
	}
	else
		ft_putchar(base[nbr], i);
}

void	ft_hex_maj(unsigned long nbr, int *i)
{
	char	*base;

	base = "0123456789ABCDEF";
	if (nbr >= 16)
	{
		ft_hex_maj(nbr / 16, i);
		ft_hex_maj(nbr % 16, i);
	}
	else
		ft_putchar(base[nbr], i);
}
