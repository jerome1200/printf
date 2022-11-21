/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-bee <jede-bee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 11:04:43 by jede-bee          #+#    #+#             */
/*   Updated: 2022/11/21 13:29:49 by jede-bee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	len_nb(long long int nbr)
{
	int	len;

	len = 0;
	if (nbr == 0)
		len = 1;
	if (nbr < 0)
	{
		nbr = nbr * -1;
		len++;
	}
	while (nbr > 0)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

static void	write_tab(char *tab, long long int nbr, int len)
{
	if (nbr == 0)
		tab[0] = '0';
	tab[len] = '\0';
	len--;
	if (nbr < 0)
	{
		nbr = nbr * -1;
		tab[0] = '-';
	}
	while (nbr > 0)
	{
		tab[len] = nbr % 10 + '0';
		nbr = nbr / 10;
		len--;
	}
}

static char	*ft_itoa(int n)
{
	long long int	llnb;
	int				len;
	char			*tab;

	llnb = n;
	len = len_nb(llnb);
	tab = malloc(sizeof(char) * (len +1));
	if (!tab)
		return (NULL);
	write_tab(tab, llnb, len);
	return (tab);
}

int	ft_print_nbr(int nbr)
{
	char	*str;
	int		len;

	len = 0;
	str = ft_itoa(nbr);
	len = ft_print_str(str);
	free(str);
	return (len);
}
