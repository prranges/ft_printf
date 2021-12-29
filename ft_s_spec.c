/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_spec.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 10:37:54 by prranges          #+#    #+#             */
/*   Updated: 2021/07/08 08:45:11 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_s_spec(char *s, t_flags flags)
{
	size_t	length;

	length = 0;
	if (s == NULL)
		s = "(null)";
	if ((size_t)flags.prec < ft_strlen(s))
		flags.width += (ft_strlen(s) - flags.prec);
	if (flags.width < 0)
		flags.width = 0;
	if (flags.prec < 0)
		flags.prec = (int)ft_strlen(s);
	if (flags.minus == 1)
		length += ft_putstr_len(s, flags.prec);
	if (flags.width > (int)ft_strlen(s))
		length += ft_add_width(flags, (flags.width - ft_strlen(s)));
	if (flags.minus == 0)
		length += ft_putstr_len(s, flags.prec);
	return (length);
}
