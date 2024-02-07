/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithms.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:28:58 by msacaliu          #+#    #+#             */
/*   Updated: 2024/02/07 14:48:05 by msacaliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	two_numbers(IntArr *stack_a)
{
	if(stack_a->array[0] < stack_a->array[1])
		ft_printf("Already sorted!\n");
	else
		sa(stack_a);
}

void	three_numbers(IntArr *stack_a)
{
	
}