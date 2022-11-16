/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-bee <jede-bee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 11:04:43 by jede-bee          #+#    #+#             */
/*   Updated: 2022/11/16 11:04:43 by jede-bee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "printf.h"


int	ft_print_nbr(int nbr)
{
	char	*str;
	int	len;

	len = 0;
	str = ft_itoa(nbr);
	len = ft_print_str(str);
	free(str);
	return (len);
}

