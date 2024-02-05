/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 13:24:03 by msacaliu          #+#    #+#             */
/*   Updated: 2024/02/05 14:27:37 by msacaliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdlib.h>
#include <limits.h>
#include "../libftprintf/ft_printf.h"

int		validate_input(char *str);
int		count_nb(char *str);
int		ft_atoi(char *str);
int		check_for_doubles(char *str);
int		ft_strlen(char *str);
char    *create_str(int argc, char *argv[]);
int		ft_strlen_mod(char *str);
int		*store_input(char *str);
char	*extract_nb(char *str ,int start);
int		*create_stack_b(char *str);
int		check_size(int *stack_b);
int		*expand_stack(int *stack, int size);
int		*delete_index(int *stack, int size);
void	sa(int *stack_a, int size);
void	sb(int *stack_b, int size);
void	pa(int **stack_a, int **stack_b);
void	pb(int **stack_a, int **stack_b);
void	ss(int *stack_a, int *stack_b, int size);




#endif