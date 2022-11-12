/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 00:13:02 by nkhoudro          #+#    #+#             */
/*   Updated: 2022/11/12 16:03:35 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base(int nbr, char *base, int *i)
{
	long long	n;

	n = nbr;
	if (n < 0)
	{
		*i += ft_putchar('-');
		n *= -1;
	}
	if (n >= (int)ft_strlen(base))
	{
		ft_putnbr_base(n / ft_strlen(base), base, i);
		*i += ft_putchar(base[n % ft_strlen(base)]);
	}
	else
		*i += ft_putchar(base[n % ft_strlen(base)]);
}

void	ft_putnbr_base_u_x_x(unsigned int nbr, char *base, int *i)
{
	if (nbr >= (unsigned int)ft_strlen(base))
	{
		ft_putnbr_base_u_x_x(nbr / ft_strlen(base), base, i);
		*i += ft_putchar(base[nbr % ft_strlen(base)]);
	}
	else
		*i += ft_putchar(base[nbr % ft_strlen(base)]);
}

void	ft_putnbr_base_p(unsigned long long nbr, char *base, int *i)
{
	if (nbr >= (unsigned long long)ft_strlen(base))
	{
		ft_putnbr_base_p(nbr / ft_strlen(base), base, i);
		*i += ft_putchar(base[nbr % ft_strlen(base)]);
	}
	else
		*i += ft_putchar(base[nbr % ft_strlen(base)]);
}
