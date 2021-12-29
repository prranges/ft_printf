/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_specs.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 08:54:16 by prranges          #+#    #+#             */
/*   Updated: 2021/07/08 08:43:49 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_flags	ft_init_flags(void)
{
	t_flags	flags;

	flags.minus = 0;
	flags.zero = 0;
	flags.prec = -1;
	flags.width = 0;
	flags.star = 0;
	return (flags);
}

size_t	ft_find_spec(char c, va_list ap, t_flags flags)
{
	size_t	length;

	length = 0;
	if (c == 'c')
		length += ft_c_spec(va_arg(ap, int), flags);
	if (c == 's')
		length += ft_s_spec(va_arg(ap, char *), flags);
	if (c == 'd' || c == 'i')
		length += ft_d_i_spec(va_arg(ap, int), flags);
	if (c == 'x')
		length += ft_x_X_spec(va_arg(ap, unsigned int), 0, flags);
	if (c == 'X')
		length += ft_x_X_spec(va_arg(ap, unsigned int), 1, flags);
	if (c == 'u')
		length += ft_u_spec(va_arg(ap, unsigned int), flags);
	if (c == 'p')
		length += ft_p_spec(va_arg(ap, unsigned long), flags);
	return (length);
}

size_t	ft_parse_spec(char *s, va_list ap)
{
	size_t	length;
	int		i;
	t_flags	flags;

	i = 0;
	length = 0;
	while (s[i] != '\0')
	{
		flags = ft_init_flags();
		if (s[i] == '%')
		{
			i++;
			i = ft_find_flag(s, ap, &flags, i);
			if (s[i] == '%')
				length += ft_c_spec('%', flags);
			if (s[i] == 'c' || s[i] == 's' || s[i] == 'd' || s[i] == 'i'
				|| s[i] == 'x' || s[i] == 'X' ||s[i] == 'u' || s[i] == 'p')
				length += ft_find_spec(s[i], ap, flags);
		}
		else
			length += ft_putchar_len(s[i]);
		i++;
	}
	return (length);
}
