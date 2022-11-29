/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsignednbr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-hid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 18:52:33 by abel-hid          #+#    #+#             */
/*   Updated: 2022/11/25 18:52:35 by abel-hid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_unsigned(unsigned int nb, int *i)
{
	if (nb >= 10)
	{
		ft_unsigned(nb / 10, i);
		ft_unsigned(nb % 10, i);
	}
	else
	{
		ft_putchar(nb + '0', i);
	}
}
