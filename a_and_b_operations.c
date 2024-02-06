/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_and_b_operations.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 16:53:23 by msacaliu          #+#    #+#             */
/*   Updated: 2024/02/06 12:46:57 by msacaliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ss(int *stack_a, int *stack_b)
{
	int	temp;
	
	if(check_size(stack_a) >= 2)
	{
		temp = stack_a[0];
		stack_a[0] = stack_a[1];
		stack_a[1] = temp;
	}

	if(check_size(stack_b) >= 2)
	{
		temp = stack_b[0];
		stack_b[0] = stack_b[1];
		stack_b[1] = temp;
	
	}
	ft_printf("ss\n");
}

void rr(int *stack_a, int *stack_b)
{
	int	size;
	int	i;
	int first_elem;

	i = 0;
	size = check_size(stack_a);
	if(size > 1)
	{
		first_elem = stack_a[0];
		while (i < size - 1)
		{
			stack_a[i] = stack_a[i + 1];
			i++;
		}
		stack_a[size - 1] = first_elem;
	}
	i = 0;
	size = check_size(stack_b);
	if(size > 1)
	{
		first_elem = stack_b[0];
		while (i < size - 1)
		{
			stack_b[i] = stack_b[i + 1];
			i++;
		}
		stack_b[size - 1] = first_elem;
	}
	ft_printf("rr\n");
}

void	rrr(int *stack_a, int *stack_b)
{
	int	size_a;
	int	size_b;
	int	i;
	int last_elem;
	
	size_a = check_size(stack_a);
	size_b = check_size(stack_b);
	if(size_a > 1 && size_b > 1 )
	{
		last_elem = stack_a[size_a - 1];
		i = size_a - 1;
		while (i > 0)
		{
			stack_a[i] = stack_a[i - 1];
			i--;
		}
		stack_a[0] = last_elem;
		last_elem = stack_b[size_b - 1];
		i = size_b - 1;
		while (i > 0)
		{
			stack_b[i] = stack_b[i - 1];
			i--;
		}
		stack_b[0] = last_elem;
		ft_printf("rrr\n");
	}
	
}