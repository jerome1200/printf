/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-bee <jede-bee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 11:03:46 by jede-bee          #+#    #+#             */
/*   Updated: 2022/11/16 11:03:46 by jede-bee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "printf.h"

void	ft_putstr(char *str);
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_print_char(str[i]);
		i++;
	}
}

int	ft_print_str(char *str)
{
	int	i;

	if (str == NULL)
	{
		ft_putstr("null");
		return (6);
	}
	while (str[i] != '\0')
	{
		ft_print_char(str[i]);
		i++;
	}
	return (i);
}
