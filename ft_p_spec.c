/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_spec.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 10:37:12 by prranges          #+#    #+#             */
/*   Updated: 2021/07/08 08:43:18 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_p_converter(uintptr_t num)
{
	char		*represent;
	static char	buffer[50];
	char		*p;

	represent = "0123456789abcdef";
	p = &buffer[49];
	*p = '\0';
	if (num == 0)
		return ("0");
	while (num != 0)
	{
		*--p = represent[num % 16];
		num /= 16;
	}
	return (p);
}

size_t	ft_p_spec(unsigned long x, t_flags flags)
{
	size_t	length;
	int		len;

	len = 0;
	length = 0;
	len = (int)ft_strlen(ft_p_converter(x));
	if (flags.prec == 0 && x == 0)
		len = 0;
	if (flags.width > len + 2 && flags.minus == 0 && flags.width > flags.prec)
		length += ft_add_width(flags, (flags.width - len - 2));
	length += ft_putstr_len("0x", 2);
	if (flags.prec > len && flags.prec >= flags.width)
	{
		flags.zero = 1;
		length += ft_add_width(flags, (flags.prec - len));
	}
	length += ft_putstr_len(ft_p_converter(x), len);
	if (flags.width > len + 2 && flags.minus == 1)
		length += ft_add_width(flags, (flags.width - len - 2));
	return (length);
}
