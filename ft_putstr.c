/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-hid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 18:52:24 by abel-hid          #+#    #+#             */
/*   Updated: 2022/11/25 18:52:27 by abel-hid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *s, int *i)
{
	int	j;

	j = 0;
	if (!s)
		s = "(null)";
	while (s[j])
	{
		ft_putchar(s[j], i);
		j++;
	}
}
