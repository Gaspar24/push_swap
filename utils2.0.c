/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.0.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 11:38:08 by msacaliu          #+#    #+#             */
/*   Updated: 2024/03/16 12:49:53 by msacaliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	is_space(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

int	validate_digits(char *str, t_ValidationState *state)
{
	if (str[state->i] == '0' && state->digit_count == 0 && state->has_digit)
		return (0);
	if (str[state->i] == '0' && state->digit_count == 0
		&& str[state->i + 1] != ' ' && str[state->i + 1] != '\0')
		return (0);
	state->digit_count++;
	state->has_digit = 1;
	return (1);
}

int	validate_spaces_and_signs(char *str, t_ValidationState *state)
{
	if ((str[state->i] == '-' || str[state->i] == '+')
		&& (state->i == 0 || (state->i > 0 && str[state->i - 1] == ' ')))
		state->has_minus = 1;
	else if (is_space(str[state->i]) && (state->digit_count > 0
			|| state->has_digit || state->has_minus))
	{
		state->digit_count = 0;
		state->has_minus = 0;
		state->has_digit = 0;
	}
	else
		return (0);
	return (1);
}

int	validate_input(char *str)
{
	t_ValidationState	state;

	state.digit_count = 0;
	state.has_digit = 0;
	state.digit_count = 0;
	state.i = 0;
	if (!check_for_doubles(str))
		return (0);
	while (str[state.i])
	{
		if (is_digit(str[state.i]) && !validate_digits(str, &state))
			return (0);
		else if (!is_digit(str[state.i])
			&& !validate_spaces_and_signs(str, &state))
			return (0);
		state.i++;
	}
	if (state.digit_count == 0 && !state.has_digit
		&& !state.has_minus && str[state.i - 1] != ' ')
		return (0);
	return (1);
}
