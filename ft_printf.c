/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:36:47 by nkhoudro          #+#    #+#             */
/*   Updated: 2022/11/12 16:47:01 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_condition(const char *s, va_list *args, int *i, int *res)
{
	if (s[*i] == 'c')
				*res += ft_putchar(va_arg(*args, int));
	else if (s[*i] == 's')
		*res += ft_putstr(va_arg(*args, char *));
	else if (s[*i] == 'd' || s[*i] == 'i')
		ft_putnbr_base(va_arg(*args, int), "0123456789", res);
	else if (s[*i] == 'u')
		ft_putnbr_base_u_x_x(va_arg(*args, unsigned int), "0123456789", res);
	else if (s[*i] == 'x')
		ft_putnbr_base_u_x_x(va_arg(*args, unsigned int), \
							"0123456789abcdef", res);
	else if (s[*i] == 'X')
		ft_putnbr_base_u_x_x(va_arg(*args, unsigned int), \
							"0123456789ABCDEF", res);
	else if (s[*i] == 'p')
	{
		*res += ft_putstr("0x");
		ft_putnbr_base_p(va_arg(*args, unsigned long long), \
						"0123456789abcdef", res);
	}
	else if (s[*i] == '%')
		*res += ft_putchar('%');
	else
		(*i)--;
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		i;
	int		res;

	res = 0;
	i = 0;
	if (write(1, "h", 0) == -1)
		return (-1);
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			ft_condition(s, &args, &i, &res);
		}
		else
			res += ft_putchar(s[i]);
		i++;
	}
	va_end(args);
	return (res);
}
