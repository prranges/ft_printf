/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 11:41:26 by prranges          #+#    #+#             */
/*   Updated: 2021/07/08 08:43:42 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	is_spec(char c)
{
	if (c == '%' || c == 'c' || c == 's'
		|| c == 'd' || c == 'i' || c == 'x'
		|| c == 'X' || c == 'u' || c == 'p')
		return (1);
	return (0);
}

int	dot_case(char *s, va_list ap, t_flags *flags, int *i)
{
	flags->prec = 0;
	*i += 1;
	while (s[*i] >= '0' && s[*i] <= '9')
	{
		flags->prec = (flags->prec * 10) + (s[*i] - '0');
		*i += 1;
	}
	if (s[*i] == '*')
		flags->prec = va_arg(ap, int);
	return (1);
}

int	star_case(va_list ap, t_flags *flags)
{
	flags->width = va_arg(ap, int);
	if (flags->width < 0)
	{
		flags->minus = 1;
		flags->width *= -1;
	}
	return (1);
}

int	ft_find_flag(char *s, va_list ap, t_flags *flags, int i)
{
	int	x;

	x = 0;
	while (s[i])
	{
		if (s[i] == '-')
		{
			flags->minus = 1;
			flags->zero = 0;
		}
		if (s[i] == '0' && flags->zero == 0 && flags->width == 0)
			if (flags->minus == 0)
				flags->zero = 1;
		if (s[i] == '.')
			x = dot_case(s, ap, flags, &i);
		if (s[i] == '*' && x == 0)
			x = star_case(ap, flags);
		if (s[i] >= '0' && s[i] <= '9' && x == 0 && flags->prec < 0)
			flags->width = (flags->width * 10) + (s[i] - '0');
		if (is_spec(s[i]))
			break ;
		i++;
	}
	return (i);
}
