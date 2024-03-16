/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 15:39:08 by msacaliu          #+#    #+#             */
/*   Updated: 2024/03/16 11:41:35 by msacaliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_nb(char *str)//works
{
	int	i;
	int	nb_count;
	int	flag;

	flag = 0;
	i = 0;
	nb_count = 0;
	while (str[i])
	{
		while ((str[i] >= '0' && str[i] <= '9')
			|| str[i] == '-' || str[i] == '+')
		{
			flag = 1;
			i++;
		}
		if (flag)
		{
			nb_count += 1;
			flag = 0;
		}
		while (str[i] && !((str[i] >= '0' && str[i] <= '9')
				|| str[i] == '-' || str[i] == '+'))
			i++;
	}
	return (nb_count);
}

char	*extract_nb(char *str, int start)//works
{
	int		i;
	char	*nb;

	i = 0;
	nb = malloc(ft_strlen(&str[start]) + 1 *(sizeof(char)));
	if (!nb || !str)
		return (NULL);
	while (str[start] != ' ' && str[start] != '\t' && str[start] != '\0')
		nb[i++] = str[start++];
	nb[i] = '\0';
	return (nb);
}

t_IntArr	init_stack_a(char *str)
{
	t_IntArr	stack_a;

	stack_a.array = NULL;
	stack_a.size = 0;
	stack_a.array = (int *)calloc(count_nb(str), sizeof(int));
	if (!stack_a.array)
		return (stack_a);
	return (stack_a);
}

void	assign_numbers(t_IntArr *stack_a, char *str)
{
	int		i;
	int		j;
	char	*nb;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == '\t' || str[i] == ' ' || str[i] == '\n')
			i++;
		else if (str[i] != '\t' && str[i] != ' ' && str[i] != '\n')
		{
			nb = extract_nb(str, i);
			stack_a->array[j] = ft_atoi(nb);
			free(nb);
			j++;
			i = i + ft_strlen_mod(&str[i]);
		}
	}
	stack_a->size = j;
}

t_IntArr	create_stack_a(char *str)
{
	t_IntArr	stack_a;

	stack_a = init_stack_a(str);
	if (stack_a.array != NULL)
		assign_numbers(&stack_a, str);
	return (stack_a);
}
