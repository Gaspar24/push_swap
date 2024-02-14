# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/01 10:59:27 by msacaliu          #+#    #+#              #
#    Updated: 2024/02/14 14:28:03 by msacaliu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = push_swap
FLAGS = -Wall -Wextra -Werror
FT_PRINTF = /home/msacaliu/42_projects/libftprintf
SRC = main.c utils.c helper_fct.c input_validation.c operation_a.c operation_b.c \
	a_and_b_operations.c algorithms.c min_max.c unlimited_numbers.c algorithm_utils.c

all : $(NAME)

$(NAME):
	cc $(FLAGS) -c $(SRC) -I$(FT_PRINTF)
	ar rc $(NAME).a *.o
	cc $(FLAGS) -o $(NAME) $(NAME).a -L$(FT_PRINTF) -lftprintf
	rm -f *.o
	rm -f *.a

clean:
	rm -f *.o
	rm -f $(NAME)

fclean :clean
	rm -f $(NAME)
    
re :fclean all
