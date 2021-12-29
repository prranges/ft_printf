/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base_converter.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 10:34:01 by prranges          #+#    #+#             */
/*   Updated: 2021/07/08 08:42:15 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_base_converter(long long int num, int base, int CAPS)
{
	char		*represent;
	char		*representCAPS;
	static char	buffer[50];
	char		*p;

	represent = "0123456789abcdef";
	representCAPS = "0123456789ABCDEF";
	p = &buffer[49];
	*p = '\0';
	if (num < 0)
		num = -num;
	if (num == 0)
		return ("0");
	while (num != 0)
	{
		if (CAPS == 1)
			*--p = representCAPS[num % base];
		else
			*--p = represent[num % base];
		num /= base;
	}
	return (p);
}
