/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 12:17:30 by prranges          #+#    #+#             */
/*   Updated: 2021/07/08 08:44:48 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putchar_len(char c)
{
	write(1, &c, 1);
	return (1);
}

size_t	ft_putstr_len(char *s, int prec)
{
	size_t	i;

	i = 0;
	if (s == NULL)
		return (0);
	while (s[i] != '\0' && prec > 0)
	{
		i += ft_putchar_len(s[i]);
		prec--;
	}
	return (i);
}

size_t	ft_strlen(const char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
		n++;
	return (n);
}

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		i;

	i = 0;
	s2 = malloc(ft_strlen(s1) * sizeof(char) + 1);
	if (!s2)
		return (NULL);
	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

size_t	ft_add_width(t_flags flags, size_t len)
{
	size_t	length;

	length = 0;
	while (length < len)
	{
		if (flags.zero == 0)
			length += ft_putchar_len(' ');
		if (flags.zero == 1)
			length += ft_putchar_len('0');
	}
	return (length);
}
