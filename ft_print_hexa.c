/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-bee <jede-bee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 11:05:51 by jede-bee          #+#    #+#             */
/*   Updated: 2022/11/21 13:30:14 by jede-bee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa_len(unsigned int nb)
{
	int	len;

	len = 0;
	while (nb > 0)
	{
		nb = nb / 16;
		len++;
	}
	return (len);
}

void	ft_write_hexa(unsigned int nb, const char format)
{
	if (nb >= 16)
	{
		ft_print_hexa(nb / 16, format);
		ft_print_hexa(nb % 16, format);
	}
	else
	{
		if (nb <= 9)
			ft_print_char(nb + '0');
		else
		{
			if (format == 'x')
				ft_print_char((nb - 10) + 'a');
			if (format == 'X')
				ft_print_char((nb - 10) + 'A');
		}
	}
}

int	ft_print_hexa(unsigned int nb, const char format)
{
	int	i;

	i = 0;
	if (nb == 0)
	{
		i = write(1, "0", 1);
		return (i);
	}
	else
	{
		i = i + ft_hexa_len(nb);
		ft_write_hexa(nb, format);
		return (i);
	}
}
