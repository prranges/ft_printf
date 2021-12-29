/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   x_X_spec.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 10:38:18 by prranges          #+#    #+#             */
/*   Updated: 2021/07/08 08:43:00 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	left_justify16(unsigned int x, size_t *length, t_flags flags, int CAPS)
{
	int	len;

	len = (int)ft_strlen(ft_base_converter(x, 16, CAPS));
	if (flags.prec > len || flags.width > len)
	{
		flags.zero = 1;
		if (len > flags.prec && flags.width <= len)
			*length += ft_add_width(flags, (flags.width - len));
		if (len < flags.prec)
			*length += ft_add_width(flags, (flags.prec - len));
		*length += ft_putstr_len(ft_base_converter(x, 16, CAPS), len);
		flags.zero = 0;
		if (flags.width > flags.prec && len >= flags.prec)
			*length += ft_add_width(flags, (flags.width - len));
		if (flags.width > flags.prec && len < flags.prec)
			*length += ft_add_width(flags, (flags.width - flags.prec));
	}
	if (flags.prec <= len && flags.width <= len)
	{
		*length += ft_putstr_len(ft_base_converter(x, 16, CAPS), len);
		if (len < flags.width)
			*length += ft_add_width(flags, (flags.width - len));
	}
}

size_t	right_justify_ifzero16(t_flags flags, int len)
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

void	right_justify16(unsigned int x, size_t *length, t_flags flags, int CAPS)
{
	int	len;

	len = (int)ft_strlen(ft_base_converter(x, 16, CAPS));
	if (flags.zero == 1)
		*length += right_justify_ifzero16(flags, len);
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

size_t	ft_x_X_spec(unsigned int x, int CAPS, t_flags flags)
{
	size_t	length;
	int		len;

	length = 0;
	len = (int)ft_strlen(ft_base_converter(x, 16, CAPS));
	if (flags.prec == 0 && x == 0)
	{
		flags.zero = 0;
		length += ft_add_width(flags, (flags.width));
		return (length);
	}
	if (flags.minus == 1)
		left_justify16(x, &length, flags, CAPS);
	if (flags.minus == 0)
	{
		right_justify16(x, &length, flags, CAPS);
		length += ft_putstr_len(ft_base_converter(x, 16, CAPS), len);
	}
	return (length);
}
