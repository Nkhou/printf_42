# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/12 00:13:09 by nkhoudro          #+#    #+#              #
#    Updated: 2022/11/12 16:47:52 by nkhoudro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

CFLAGE = -Wall -Wextra -Werror

SRC = ft_printf.c \
		ft_help.c \
		ft_base.c \

OBJCTS = $(SRC:.c=.o)

all : $(NAME)

$(NAME): $(OBJCTS)
	ar crs $(NAME) $(OBJCTS)

%.o : %.c ft_printf.h
	$(CC) $(CFLAGE) -c $< -o $@

clean:
	rm -f $(OBJCTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re