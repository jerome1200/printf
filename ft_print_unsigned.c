/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-bee <jede-bee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 11:05:30 by jede-bee          #+#    #+#             */
/*   Updated: 2022/11/16 11:05:30 by jede-bee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "printf.h"

int	ft_unsigned_len(unsigned int nb)
{
	int	i;

	i = 0;
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

char	*ft_unsigned_itoa(unsigned int nb)
{
	int	len;
	char	*str;

	len = ft_unsigned_len(nb);
	str = malloc(sizeof(char) * (len + 1));
	if(!str)
		return (NULL);
	str[len] == '\0';
	while (nb > 0)
	{
		str[len - 1] = (nb % 10) + '0';
		nb = nb /10
		len--;
	}
	return (str);
}

int	ft_print_unsigned(unsigned int	nbr)
{
	int	i;
	char	*str;

	i = 0;
	if (nrb = 0)
		i = i + write(1, "0", 1);
	else
	{
		str = ft_unsigned_itoa(nbr);
		i = ft_print_str(str)
		free(str);
	}
	return (i);
}
