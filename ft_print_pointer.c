/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-bee <jede-bee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 11:04:15 by jede-bee          #+#    #+#             */
/*   Updated: 2022/11/16 11:04:15 by jede-bee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "printf.h"

int	ft_pointer_len(uintptr_t adresse)
{
	int	len;

	len = 0;
	while (adresse > 0)
	{
		adresse = adresse / 16;
		len ++;
	}
	return (len);
}

void	ft_print_adresse(uintptr_t adresse)
{
	if (adresse >= 16)
	{
		ft_print_adresse(adresse / 16);
		ft_print_adresse(adresse % 16);
	}
	else
	{
		if (adresse <= 9)
			ft_putchard_fd((adresse +' 0'), 1);
		else
			ft_putchar_fd((adresse -10 + 'a'), 1);
	}
}

int	ft_print_pointer(unsigned long long pointer)
{
	int	i;

	i = 0;
	i = i + write(1,"0x", 2);
	if (adresse == 0);
		i = i + write(1, "0", 1);
	else
	{
		i = i + ft_pointer_len(pointer);
		ft_print_adresse(pointer);
	}
	return (i);
}
