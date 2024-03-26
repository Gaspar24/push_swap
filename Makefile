# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/01 10:59:27 by msacaliu          #+#    #+#              #
#    Updated: 2024/03/24 11:57:39 by msacaliu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = push_swap
FLAGS = -Wall -Wextra -Werror
FT_PRINTF = ./lib/libftprintf/libftprintf.a
PRINTF_DIR =./lib/libftprintf

SRC = main.c utils.c helper_fct.c input_validation.c operation_a.c operation_b.c \
	a_and_b_operations.c algorithms.c min_max.c unlimited_numbers.c algorithm_utils.c \
	utils2.0.c

all : $(NAME)

$(NAME):$(FT_PRINTF)
	cc $(FLAGS) -c $(SRC) 
	ar rc $(NAME).a *.o
	cc $(FLAGS) -o $(NAME) $(NAME).a $(FT_PRINTF)
	rm -f *.o
	rm -f *.a

$(FT_PRINTF):
	make -C $(PRINTF_DIR)
clean:
	rm -f *.o
	rm -f $(NAME)

fclean :clean
	rm -f $(NAME)
    
re :fclean all
