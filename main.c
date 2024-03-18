/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 12:31:44 by msacaliu          #+#    #+#             */
/*   Updated: 2024/03/18 13:51:38 by msacaliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_IntArr	create_stack_b(void) //works
{
	t_IntArr	stack_b;

	stack_b.array = NULL;
	stack_b.size = 0;
	stack_b.array = (int *)malloc(sizeof(int));
	if (!stack_b.array)
		return (stack_b);
	return (stack_b);
}

int	one_argument(t_IntArr *stack_a, t_IntArr *stack_b, char *str)
{
	if (validate_input(str) == 0)
		return (ft_printf("Error\n"), 1);
	*stack_a = create_stack_a(str);
	*stack_b = create_stack_b();
	if (!stack_is_sorted(stack_a))
	{
		if (stack_a->size == 2)
			two_numbers(stack_a);
		if (stack_a->size == 3)
			three_numbers(stack_a);
		if (stack_a->size == 5)
			five_numbers(stack_a, stack_b);
		// else
			// unlimited_numbers(stack_a, stack_b);
	}
	free(stack_a->array);
	free(stack_b->array);
	return (0);
}

int	more_arguments(t_IntArr *stack_a, t_IntArr *stack_b, char *str)
{
	// t_IntArr sorted_a;
	if (validate_input(str) == 0)
	{
		free(str);
		return (ft_printf("Error\n"), 1);
	}
	*stack_a = create_stack_a(str);
	free(str);
	*stack_b = create_stack_b();
	if (!stack_is_sorted(stack_a))
	{
		if (stack_a->size == 2)
			two_numbers(stack_a);
		if (stack_a->size == 3)
			three_numbers(stack_a);
		if (stack_a->size == 5)
			five_numbers(stack_a, stack_b);
		// else
			// unlimited_numbers(stack_a, stack_b);
	}
	
	// sorted_a = sort_a_test(stack_a);
	// for(int i = 0; i < sorted_a.size;i++)
	// 	ft_printf("%d ",sorted_a.array[i]);
	// int mid = get_midpoint(stack_a);
	// ft_printf("mid %d",mid);
	free(stack_a->array);
	free(stack_b->array);
	return (0);
}

int	main(int argc, char *argv[])
{
	char		*str;
	t_IntArr	stack_a;
	t_IntArr	stack_b;
	str = argv[1];
	if (argc < 2)
		return (ft_printf("Error\n"), 1);
	if (argc == 2)
		one_argument(&stack_a, &stack_b, str);
	if (argc > 2)
	{
		str = create_str(argc, argv);
		more_arguments(&stack_a, &stack_b, str);
	}

	return (0);
}
