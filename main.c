/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 12:31:44 by msacaliu          #+#    #+#             */
/*   Updated: 2024/03/13 11:19:33 by msacaliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
		else
			unlimited_numbers(stack_a, stack_b);
	}
	free(stack_a->array);
	free(stack_b->array);
	return (0);
}

int	more_arguments(t_IntArr *stack_a, t_IntArr *stack_b, char *str)
{
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
		else
			unlimited_numbers(stack_a, stack_b);
	}
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
