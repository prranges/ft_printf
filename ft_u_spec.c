/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u_spec.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 10:38:18 by prranges          #+#    #+#             */
/*   Updated: 2021/07/08 08:42:52 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	left_justify10(unsigned int x, size_t *length, t_flags flags)
{
	int	len;

	len = (int)ft_strlen(ft_base_converter(x, 10, 0));
	if (flags.prec > len || flags.width > len)
	{
		flags.zero = 1;
		if (len > flags.prec && flags.width <= len)
			*length += ft_add_width(flags, (flags.width - len));
		if (len < flags.prec)
			*length += ft_add_width(flags, (flags.prec - len));
		*length += ft_putstr_len(ft_base_converter(x, 10, 0), len);
		flags.zero = 0;
		if (flags.width > flags.prec && len >= flags.prec)
			*length += ft_add_width(flags, (flags.width - len));
		if (flags.width > flags.prec && len < flags.prec)
			*length += ft_add_width(flags, (flags.width - flags.prec));
	}
	if (flags.prec <= len && flags.width <= len)
	{
		*length += ft_putstr_len(ft_base_converter(x, 10, 0), len);
		if (len < flags.width)
			*length += ft_add_width(flags, (flags.width - len));
	}
}

size_t	right_justify_ifzero10(t_flags flags, int len)
{
	size_t	length;

	length = 0;
	flags.zero = 0;
	if (flags.width > flags.prec && flags.prec >= len)
		length += ft_add_width(flags, (flags.width - flags.prec));
	if (flags.prec < len && flags.prec >= 0 && len < flags.width)
		length += ft_add_width(flags, (flags.width - len));
	flags.zero = 1;
	if (flags.prec > 0 && len < flags.prec)
		length += ft_add_width(flags, (flags.prec - len));
	if (flags.prec < 0 && len < flags.width)
		length += ft_add_width(flags, (flags.width - len));
	return (length);
}

void	right_justify10(unsigned int x, size_t *length, t_flags flags)
{
	int	len;

	len = (int)ft_strlen(ft_base_converter(x, 10, 0));
	if (flags.zero == 1)
		*length += right_justify_ifzero10(flags, len);
	if (flags.zero == 0)
	{
		if (flags.width > flags.prec && flags.prec >= len)
			*length += ft_add_width(flags, (flags.width - flags.prec));
		if (flags.prec < len && flags.width > 0 && len < flags.width)
			*length += ft_add_width(flags, (flags.width - len));
		flags.zero = 1;
		if (flags.prec > 0 && len < flags.prec)
			*length += ft_add_width(flags, (flags.prec - len));
	}
}

size_t	ft_u_spec(unsigned int x, t_flags flags)
{
	size_t	length;
	int		len;

	length = 0;
	len = (int)ft_strlen(ft_base_converter(x, 10, 0));
	if (flags.prec == 0 && x == 0)
	{
		flags.zero = 0;
		length += ft_add_width(flags, (flags.width));
		return (length);
	}
	if (flags.minus == 1)
		left_justify10(x, &length, flags);
	if (flags.minus == 0)
	{
		right_justify10(x, &length, flags);
		length += ft_putstr_len(ft_base_converter(x, 10, 0), len);
	}
	return (length);
}
