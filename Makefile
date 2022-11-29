# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abel-hid <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/25 18:50:55 by abel-hid          #+#    #+#              #
#    Updated: 2022/11/25 18:50:57 by abel-hid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_printf.c \
 	 	ft_putchar.c \
		ft_putstr.c \
		ft_putnbr.c \
		ft_putunsignednbr.c \
		ft_hex.c

OBJS = $(SRCS:.c=.o)


CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
all: $(NAME)
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $<
clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)
