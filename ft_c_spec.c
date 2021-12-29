/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_spec.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 10:33:21 by prranges          #+#    #+#             */
/*   Updated: 2021/07/08 08:42:31 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_c_spec(int x, t_flags flags)
{
	size_t	length;

	length = 0;
	if (flags.minus == 1)
		length += ft_putchar_len(x);
	if (flags.width > 1)
	{
		if (flags.minus == 1)
			flags.zero = 0;
		length += ft_add_width(flags, flags.width - 1);
	}
	if (flags.minus == 0)
		length += ft_putchar_len(x);
	return (length);
}
