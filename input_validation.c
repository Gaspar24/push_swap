/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_validation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 12:57:27 by msacaliu          #+#    #+#             */
/*   Updated: 2024/03/16 12:10:35 by msacaliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*fill_string(int argc, char **argv, char *str)
{
	int	i;
	int	j;
	int	k;

	i = 1;
	j = 0;
	k = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
			str[k++] = argv[i][j++];
		if (i < argc - 1)
			str[k++] = ' ';
		i++;
	}
	str[k] = '\0';
	return (str);
}

char	*create_str(int argc, char **argv)
{
	int		i;
	char	*str;
	int		total;

	i = 1;
	total = 0;
	while (i < argc)
		total += ft_strlen(argv[i++]);
	total += argc - 1;
	str = malloc((total + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str = fill_string(argc, argv, str);
	return (str);
}

int	check_for_duplicates(int *arr, int nb)
{
	int	i;
	int	j;

	i = 0;
	while (i < nb)
	{
		j = i + 1;
		while (j < nb)
		{
			if (arr[i] == arr[j])
			{
				free(arr);
				return (0);
			}
			j++;
		}
		i++;
	}
	free(arr);
	return (1);
}

int	check_for_doubles(char *str)
{
	int	i;
	int	j;
	int	nb;
	int	*arr;

	i = 0;
	j = 0;
	nb = count_nb(str);
	arr = (int *)malloc(sizeof(int) * nb);
	while (str[i])
	{
		while ((str[i] >= '0' && str[i] <= '9')
			|| str[i] == '-' || str[i] == '+')
		{
			arr[j] = ft_atoi(&str[i]);
			j++;
			while ((str[i] >= '0' && str[i] <= '9')
				|| str[i] == '-' || str[i] == '+')
				i++;
		}
		while (str[i] && !((str[i] >= '0' && str[i] <= '9')
				|| str[i] == '-' || str[i] == '+'))
			i++;
	}
	return (check_for_duplicates(arr, nb));
}

int	check_size(int *stack)//works
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (stack[i])
	{
		i++;
		count++;
	}
	return (count);
}
