/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-bee <jede-bee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 09:29:39 by jede-bee          #+#    #+#             */
/*   Updated: 2022/11/21 13:22:44 by jede-bee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdint.h>

int			ft_print_char(char c);
int			ft_format(va_list arg, const char format);
int			ft_printf(const char *str, ...);
int			ft_unsigned_len(unsigned int nb);
char		*ft_unsigned_itoa(unsigned int nb);
int			ft_print_unsigned(unsigned int nbr);
void		ft_putstr(char *str);
int			ft_print_str(char *str);
int			ft_pointer_len(uintptr_t adresse);
void		ft_print_adresse(uintptr_t adresse);
int			ft_print_pointer(unsigned long long adresse);
int			ft_print_percent(void);
void		ft_putchar_fd(char c, int fd);
int			ft_print_nbr(int nbr);
int			ft_hexa_len(unsigned int nb);
void		ft_write_hexa(unsigned int nb, const char format);
int			ft_print_hexa(unsigned int nb, const char format);

#endif