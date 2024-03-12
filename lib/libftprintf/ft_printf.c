/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msacaliu <msacaliu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 15:33:58 by msacaliu          #+#    #+#             */
/*   Updated: 2023/12/12 11:44:25 by msacaliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
// #include <stdio.h>

int	ft_print_cspdi(const char *placeholder, va_list args, const int index)
{
	int	count_char;

	count_char = 0;
	if (placeholder[index + 1] == 'c')
		count_char += ft_putchar_pf(va_arg(args, int));
	else if (placeholder[index + 1] == 's')
		count_char += ft_putstr_pf(va_arg(args, char *));
	else if (placeholder[index + 1] == 'd' || placeholder[index + 1] == 'i')
		count_char += ft_putnbr_pf(va_arg(args, int));
	else if (placeholder[index + 1] == 'p')
		count_char += ft_putp_pf(va_arg(args, void *));
	return (count_char);
}

int	print_uxmod(const char *placeholder, va_list args, const int index)
{
	int	count_char;

	count_char = 0;
	if (placeholder[index + 1] == 'u')
		count_char += ft_putnbr_u(va_arg(args, unsigned int));
	else if (placeholder[index + 1] == 'x')
		count_char += ft_putnbr_hex(va_arg(args, unsigned int), 'x', 'h');
	else if (placeholder[index + 1] == 'X')
		count_char += ft_putnbr_hex(va_arg(args, unsigned int), 'X', 'h');
	else if (placeholder[index + 1] == '%')
		count_char += ft_putchar_pf('%');
	return (count_char);
}

int	print_element(const char *placeholder, va_list args, int index)
{
	int	count_char;

	count_char = 0;
	if (placeholder[index + 1] == 'c' || placeholder[index + 1] == 's'
		|| placeholder[index + 1] == 'p' || placeholder[index + 1] == 'd'
		|| placeholder[index + 1] == 'i' )
		count_char += ft_print_cspdi(placeholder, args, index);
	else if (placeholder[index + 1] == 'u' || placeholder[index + 1] == 'x'
		|| placeholder[index + 1] == 'X' || placeholder[index + 1] == '%')
		count_char += print_uxmod(placeholder, args, index);
	else
		return (-1);
	return (count_char);
}

int	ft_printf(const char *placeholder, ...)
{
	int		num_args;
	int		index;
	int		count_char;
	va_list	args;

	num_args = ft_strlen_pf((char *)placeholder);
	count_char = 0;
	index = 0;
	va_start(args, placeholder);
	while (index < num_args)
	{
		if (placeholder[index] != '%')
		{
			count_char += ft_putchar_pf(placeholder[index]);
			index++;
		}
		else if (placeholder[index] == '%')
		{
			count_char += print_element(placeholder, args, index);
			index += 2;
		}
	}
	va_end(args);
	return (count_char);
}

// int	main(void)
// {
// 	void	*ptr;

// 	ft_printf("%c \n",'c');
// 	ft_printf("first nr:%i \nsecond nr: %d\n", -432, 3);
// 	ft_printf("test: %s\n", NULL);
// 	printf("test: %s\n", NULL);
// 	printf("%p \n", &ptr);
// 	ft_printf("%p\n", &ptr);
// 	printf("org fct:%u \n", 42);
// 	ft_printf("my fct :%u\n", 442);
// 	ft_printf("my fct hex low: %x \n", 42);
// 	printf("org fct hex low:%llx\n", 9223372036854775807LL);
// 	ft_printf("my fct hex up: %X \n", 9223372036854775807LL);
// 	printf("org fct hex up:%X\n", 42);
// 	printf("org fct %% \n", NULL);
// 	ft_printf("my fct %%\n", NULL);
// 	ft_printf("%d", 0);	
// 	return (0);
// }