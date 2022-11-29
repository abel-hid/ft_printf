/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-hid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 18:51:27 by abel-hid          #+#    #+#             */
/*   Updated: 2022/11/25 18:51:32 by abel-hid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int		ft_printf(const char *s, ...);
void	ft_ft(va_list args, char c, int *i);
void	ft_putstr(char *s, int *i);
void	ft_putchar(char c, int *i);
void	ft_putnbr(int nb, int *i);
void	ft_unsigned(unsigned int nb, int *i);
void	ft_hex_maj(unsigned long nbr, int *i);
void	ft_hex_min(unsigned long nb, int *i);

#endif
