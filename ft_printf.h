/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 23:31:08 by nkhoudro          #+#    #+#             */
/*   Updated: 2022/11/12 00:16:46 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *s, ...);
int		ft_strlen(const char *s);
int		ft_putchar(char c);
void	ft_putnbr_base(int nbr, char *base, int *i);
void	ft_putnbr_base_u_x_x(unsigned int nbr, char *base, int *i);
void	ft_putnbr_base_p(unsigned long long nbr, char *base, int *i);
int		ft_putstr(char *s);

#endif