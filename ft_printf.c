/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 16:26:15 by prranges          #+#    #+#             */
/*   Updated: 2021/07/08 08:44:09 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	size_t	length;
	char	*s;

	length = 0;
	if (!format)
		return (0);
	s = ft_strdup(format);
	if (!s)
		return (-1);
	va_start(ap, format);
	length = ft_parse_spec(s, ap);
	va_end(ap);
	free(s);
	return ((int)length);
}
