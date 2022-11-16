/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-bee <jede-bee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 09:57:39 by jede-bee          #+#    #+#             */
/*   Updated: 2022/11/16 09:57:39 by jede-bee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include "printf.h"

int	ft_print_char(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_format(va_list arg, const char format)
{
	int	print_result;

	print_result = 0;
	if (format == 'c')
		print_result = print_result + ft_print_char(va_arg(arg, int));
	else if(format == 's')
		print_result = print_result + ft_print_str(va_arg(arg, char *));
	else if(format == 'p')
		print_result = print_result + ft_print_pointer(va_arg(arg, unsigned long long));
	else if(format == 'd' || format == 'i')
		print_result = print_result + ft_print_nbr(va_arg(arg, int));
	else if(format == 'u')
		print_result = print_result + ft_print_unsigned(va_arg(arg, unsigned int));
	else if(format == 'x' || format == 'X')
		print_result = print_result + ft_print_hexa(va_arg(va_arg, unsigned int), format);
	else if(format == '%')
		print_result = print_result + ft_print_percent();
	return (print_result);
}

int	ft_printf(const char *str, ...)
{
	va_list	arg_list;
	int	i;
	int	print_result;

	i = 0;
	va_start(arg_list, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			print_result = print_result + ft_format(arg_list, str[i + 1]);
			i++;
		}
		else
			print_result = print_result + ft_print_char(str[i]);
		i++;
	}
	va_end(arg_list, str);
	return (print_result);
}
