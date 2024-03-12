/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 11:00:50 by msacaliu          #+#    #+#             */
/*   Updated: 2023/12/12 10:24:36 by msacaliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hex(unsigned long long n, char c, char flag)
{
	char					*base_symbols;
	char					symbol;
	unsigned long long int	base_value;
	unsigned long long int	count;

	base_value = 16;
	count = 0;
	if (flag == 'h')
		n = (unsigned int)n;
	if (c == 'x')
		base_symbols = HEX_LOW_BASE;
	else
		base_symbols = HEX_UPP_BASE;
	if (n >= base_value)
		count += ft_putnbr_hex(n / base_value, c, flag);
	symbol = base_symbols[n % base_value];
	while (*base_symbols != symbol)
		base_symbols ++;
	count += ft_putchar_pf(*base_symbols);
	return (count);
}

// int main(void)
// {
// 	unsigned long long  rez = ft_putnbr_hex(9223372036854775807LL, 'X');
// 	printf(" %lld ",rez);
// 	return (0);
// }
// char *str = "7";