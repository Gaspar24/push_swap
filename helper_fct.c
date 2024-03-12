/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_fct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 11:06:47 by msacaliu          #+#    #+#             */
/*   Updated: 2024/03/12 16:15:34 by msacaliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(char *str)
{
	int	i;
	int	neg;
	int	result;

	i = 0;
	neg = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * neg);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strlen_mod(char *str)
{
	int	i;

	i = 0;
	while ((str[i] != '\t' && str[i] != ' ' && str[i] != '\n') && str[i])
		i++;
	return (i);
}

IntArr	*expand_stack(IntArr *stack)
{
	int		i;
	IntArr	*new_stack;

	new_stack = malloc(sizeof(IntArr));
	if (!new_stack)
		return (NULL);
	i = 0;
	new_stack->size = stack->size + 1;
	new_stack->array = malloc(new_stack->size * sizeof(int));
	if (!new_stack->array)
	{
		free(new_stack);
		return (NULL);
	}
	while (i < stack->size)
	{
		new_stack->array[i] = stack->array[i];
		i++;
	}
	return (new_stack);
}

IntArr	*delete_index(IntArr *stack)
{
	int		i;
	int		j;
	IntArr	*new_stack;

	new_stack = malloc(sizeof(IntArr));
	if (!new_stack)
		return (NULL);
	i = 1;
	j = 0;
	new_stack->size = stack->size - 1;
	new_stack->array = malloc(new_stack->size * sizeof(int));
	if (!new_stack->array)
	{
		free(new_stack);
		return (NULL);
	}
	while (i < stack->size)
	{
		new_stack->array[j] = stack->array[i];
		i++;
		j++;
	}
	return (new_stack);
}
