# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/06 15:30:45 by msacaliu          #+#    #+#              #
#    Updated: 2023/12/10 17:48:41 by msacaliu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
FLAGS = -Wall -Wextra -Werror -g
SRC = ft_printf.c ft_putchar_pf.c ft_strlen_pf.c ft_putstr_pf.c ft_putnbr_pf.c ft_putp_pf.c ft_putnbr_u.c\
	ft_putnbr_hex.c

all: $(NAME)

$(NAME):
	cc $(FLAGS) -c $(SRC)
	ar rc $(NAME) *.o
	rm -f *.o

clean:
	rm -f *.o

fclean :clean
	rm -f $(NAME)
	
re :fclean all