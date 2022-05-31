/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c.                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 10:34:01 by prranges          #+#    #+#             */
/*   Updated: 2021/07/08 08:42:15 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>
#include <stdio.h>

void	d_test(void)
{
	printf(GREEN"\n--d test--\n"BLACK"\n");
	printf("[%d]\n", ft_printf("%.5d", INT_MIN));
	printf("[%d]\n", printf("%.5d", INT_MIN));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%*.*d", 20, 4, INT_MAX));
	printf("[%d]\n", printf("%*.*d", 20, 4, INT_MAX));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%.15d", INT_MIN));
	printf("[%d]\n", printf("%.15d", INT_MIN));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%.19d", INT_MIN));
	printf("[%d]\n", printf("%.19d", INT_MIN));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%-*.*d", 0, 0, 7879789));
	printf("[%d]\n", printf("%-*.*d", 0, 0, 7879789));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%10d", 0));
	printf("[%d]\n", printf("%10d", 0));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%5d", 0));
	printf("[%d]\n", printf("%5d", 0));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%.10d", 111));
	printf("[%d]\n", printf("%.10d", 111));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%.10d", -111));
	printf("[%d]\n", printf("%.10d", -111));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%10.4d", 0));
	printf("[%d]\n", printf("%10.4d", 0));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%10.4d", 0));
	printf("[%d]\n", printf("%10.4d", 0));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%-10d", 5));
	printf("[%d]\n", printf("%-10d", 5));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%-10d", -5));
	printf("[%d]\n", printf("%-10d", -5));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%-.20d", 0));
	printf("[%d]\n", printf("%-.20d", 0));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%-.20d", 34567));
	printf("[%d]\n", printf("%-.20d", 34567));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%-10.20d", -12345));
	printf("[%d]\n", printf("%-10.20d", -12345));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%-10.20d", 33));
	printf("[%d]\n", printf("%-10.20d", 33));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%-*.*d", 4, 0, 1));
	printf("[%d]\n", printf("%-*.*d", 4, 0, 1));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%-*.*d", 4, 0, -1));
	printf("[%d]\n", printf("%-*.*d", 4, 0, -1));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%-.5d", 44));
	printf("[%d]\n", printf("%-.5d", 44));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%-.5d", -44));
	printf("[%d]\n", printf("%-.5d", -44));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%.d", 0));
	printf("[%d]\n", printf("%.d", 0));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%5.0d", 0));
	printf("[%d]\n", printf("%5.0d", 0));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%6.d", 0));
	printf("[%d]\n", printf("%6.d", 0));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%-7.0d", 0));
	printf("[%d]\n", printf("%-7.0d", 0));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%-4.d", 0));
	printf("[%d]\n", printf("%-4.d", 0));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%-*.*d", 0, 0, 0));
	printf("[%d]\n", printf("%-*.*d", 0, 0, 0));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%.*d", -5, 0));
	printf("[%d]\n", printf("%.*d", -5, 0));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%.*d", 0, 0));
	printf("[%d]\n", printf("%.*d", 0, 0));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%.*d", 0, 1));
	printf("[%d]\n", printf("%.*d", 0, 1));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%12.11d", INT_MIN));
	printf("[%d]\n", printf("%12.11d", INT_MIN));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%12.11d", INT_MAX));
	printf("[%d]\n", printf("%12.11d", INT_MAX));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%.*d", 0, 0));
	printf("[%d]\n", printf("%.*d", 0, 0));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%-5.d", 0));
	printf("[%d]\n", printf("%-5.d", 0));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%5.4d", 456));
	printf("[%d]\n", printf("%5.4d", 456));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%5.4d", -456));
	printf("[%d]\n", printf("%5.4d", -456));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%12.11d", INT_MAX));
	printf("[%d]\n", printf("%12.11d", INT_MAX));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%-12.11d", INT_MIN));
	printf("[%d]\n", printf("%-12.11d", INT_MIN));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%-12.12d", INT_MIN));
	printf("[%d]\n", printf("%-12.12d", INT_MIN));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%-11.11d", INT_MIN));
	printf("[%d]\n", printf("%-11.11d", INT_MIN));
	printf("-----------------\n");
}

void	char_test(void)
{
	char c;

	c = 'a';
	printf(GREEN"\n--char test--\n"BLACK"\n");
	printf("[%d]\n", ft_printf("%c", c));
	printf("[%d]\n", printf("%c", c));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%-5c", c));
	printf("[%d]\n", printf("%-5c", c));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%-10c", c));
	printf("[%d]\n", printf("%-10c", c));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%*c", -9, c));
	printf("[%d]\n", printf("%*c", -9, c));
	printf("-----------------\n");
}

void	hex_test(void)
{
	printf(GREEN"\n--hex test--\n"BLACK"\n");
	printf("[%d]\n", ft_printf("%x", 778662234));
	printf("[%d]\n", printf("%x", 778662234));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%x", 1));
	printf("[%d]\n", printf("%x", 1));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%x", 2));
	printf("[%d]\n", printf("%x", 2));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%x", 100));
	printf("[%d]\n", printf("%x", 100));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%x", 200));
	printf("[%d]\n", printf("%x", 200));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%x", 1600));
	printf("[%d]\n", printf("%x", 1600));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%10x", 1));
	printf("[%d]\n", printf("%10x", 1));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%15x", 2));
	printf("[%d]\n", printf("%15x", 2));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%2x", 100));
	printf("[%d]\n", printf("%2x", 100));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%23x", 200));
	printf("[%d]\n", printf("%23x", 200));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%10x", 1600));
	printf("[%d]\n", printf("%10x", 1600));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%-10x", 1));
	printf("[%d]\n", printf("%-10x", 1));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%-15x", 2));
	printf("[%d]\n", printf("%-15x", 2));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%-2x", 100));
	printf("[%d]\n", printf("%-2x", 100));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%-23x", 200));
	printf("[%d]\n", printf("%-23x", 200));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%010x", 1));
	printf("[%d]\n", printf("%010x", 1));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%015x", 2));
	printf("[%d]\n", printf("%015x", 2));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%02x", 100));
	printf("[%d]\n", printf("%02x", 100));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%023x", 200));
	printf("[%d]\n", printf("%023x", 200));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%010x", 1600));
	printf("[%d]\n", printf("%010x", 1600));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%-10x", 1600));
	printf("[%d]\n", printf("%-10x", 1600));
	printf("-----------------\n");
}

void	percentage_test(void)
{
	printf(GREEN"\n--percentage test--\n"BLACK"\n");
	printf("[%d]\n", ft_printf("%%5 %%77"));
	printf("[%d]\n", printf("%%5 %%77"));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%% hihoihoih %.5d", 3));
	printf("[%d]\n", printf("%% hihoihoih %.5d", 3));
	printf("-----------------\n");
}

void	pointer_test(void)
{
	char	c;

	c = '5';
	printf(GREEN"\n--pointer test--\n"BLACK"\n");
	printf("[%d]\n", ft_printf("%p\n", &c));
	printf("[%d]\n", printf("%p\n", &c));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%50p\n", &c));
	printf("[%d]\n", printf("%50p\n", &c));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%25p\n", &c));
	printf("[%d]\n", printf("%25p\n", &c));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%-25p\n", &c));
	printf("[%d]\n", printf("%-25p\n", &c));
	printf("-----------------\n");
}

void	str_test(void)
{
	char *s = "test";

	printf(GREEN"\n--str test--\n"BLACK"\n");
	printf("[%d]\n", ft_printf("%20.13s\n", s));
	printf("[%d]\n", printf("%20.13s\n", s));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%5s\n", s));
	printf("[%d]\n", printf("%5s\n", s));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%3s\n", s));
	printf("[%d]\n", printf("%3s\n", s));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%.5s\n", s));
	printf("[%d]\n", printf("%.5s\n", s));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%.3s\n", s));
	printf("[%d]\n", printf("%.3s\n", s));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%10.0s\n", s));
	printf("[%d]\n", printf("%10.0s\n", s));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%-5s\n", s));
	printf("[%d]\n", printf("%-5s\n", s));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%-10s\n", s));
	printf("[%d]\n", printf("%-10s\n", s));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%*.*s\n", -10, 2, s));
	printf("[%d]\n", printf("%*.*s\n", -10, 2, s));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%-10.55s\n", s));
	printf("[%d]\n", printf("%-10.55s\n", s));
	printf("-----------------\n");
	s = NULL;
	printf("[%d]\n", ft_printf("%20.13s\n", s));
	printf("[%d]\n", printf("%20.13s\n", s));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%10s\n", s));
	printf("[%d]\n", printf("%10s\n", s));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%10s\n", s));
	printf("[%d]\n", printf("%10s\n", s));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%1s\n", s));
	printf("[%d]\n", printf("%1s\n", s));
	printf("-----------------\n");
	printf("[%d]\n", ft_printf("%10.0s\n", s));
	printf("[%d]\n", printf("%10.0s\n", s));
	printf("-----------------\n");
}

void	u_test(void)
{
	unsigned int	u;
	int				a;
	int				b;

	a = 4;
	b = -15;
	u = 10;
	printf(GREEN"\n--u test--\n"BLACK"\n");
	printf("return value is %d\n", ft_printf("%*.*u", 4, 15, u));
	printf("return value is %d\n", printf("%*.*u", 4, 15, u));
	printf("-----------------\n");
	printf("return value is %d\n", ft_printf("%10u", 456));
	printf("return value is %d\n", printf("%10u", 456));
	printf("-----------------\n");
	printf("return value is %d\n", ft_printf("%.5u", u));
	printf("return value is %d\n", printf("%.5u", u));
	printf("-----------------\n");
	printf("return value is %d\n", ft_printf("%*.*u", 1, -4, u));
	printf("return value is %d\n", printf("%*.*u", 1, -4, u));
	printf("-----------------\n");
	printf("return value is %d\n", ft_printf("%*.*u", 4, -15, u));
	printf("return value is %d\n", printf("%*.*u", 4, -15, u));
	printf("-----------------\n");
	printf("return value is %d\n", ft_printf("%*.*u", a, b, u));
	printf("return value is %d\n", printf("%*.*u", a, b, u));
	printf("-----------------\n");
	printf("return value is %d\n", ft_printf("%*.*u", b, a, u));
	printf("return value is %d\n", printf("%*.*u", b, a, u));
	printf("-----------------\n");
	printf("return value is %d\n", ft_printf("%u", UINT_MAX));
	printf("return value is %d\n", printf("%u", UINT_MAX));
	printf("-----------------\n");
	printf("return value is %d\n", ft_printf("%-*.*u", 15, 4, u));
	printf("return value is %d\n", printf("%-*.*u", 15, 4, u));
	printf("-----------------\n");
	printf("return value is %d\n", ft_printf("%-*.*u", b, a, u));
	printf("return value is %d\n", printf("%-*.*u", b, a, u));
	printf("-----------------\n");
	printf("return value is %d\n", ft_printf("%-10u", 456));
	printf("return value is %d\n", printf("%-10u", 456));
	printf("-----------------\n");
	printf("return value is %d\n", ft_printf("%-*.*u", 4, -15, u));
	printf("return value is %d\n", printf("%-*.*u", 4, -15, u));
	printf("-----------------\n");
	printf("return value is %d\n", ft_printf("%-*.*u", a, b, u));
	printf("return value is %d\n", printf("%-*.*u", a, b, u));
	printf("-----------------\n");
	printf("return value is %d\n", ft_printf("%-*.*u", 4, 15, u));
	printf("return value is %d\n", printf("%-*.*u", 4, 15, u));
	printf("-----------------\n");
	printf("return value is %d\n", ft_printf("%-u", UINT_MAX));
	printf("return value is %d\n", printf("%-u", UINT_MAX));
	printf("-----------------\n");
	printf("return value is %d\n", ft_printf("%-.5u", u));
	printf("return value is %d\n", printf("%-.5u", u));
	printf("-----------------\n");
	printf("return value is %d\n", ft_printf("%-*.*u", 1, -4, u));
	printf("return value is %d\n", printf("%-*.*u", 1, -4, u));
	printf("-----------------\n");
	printf("return value is %d\n", ft_printf("%-*.*u", 3, 3, u));
	printf("return value is %d\n", printf("%-*.*u", 3, 3, u));
	printf("-----------------\n");
	printf("return value is %d\n", ft_printf("%.39u", -1410072806));
	printf("return value is %d\n", printf("%.39u", -1410072806));
	printf("-----------------\n");
	printf("return value is %d\n", ft_printf("%.2u", 0));
	printf("return value is %d\n", printf("%.2u", 0));
	printf("-----------------\n");
	printf("return value is %d\n", ft_printf("%.40u", 938668615));
	printf("return value is %d\n", printf("%.40u", 938668615));
	printf("-----------------\n");
	printf("return value is %d\n", ft_printf("%.40u", 0));
	printf("return value is %d\n", printf("%.40u", 0));
	printf("-----------------\n");
	printf("return value is %d\n", ft_printf("%2u", 0));
	printf("return value is %d\n", printf("%2u", 0));
	printf("-----------------\n");
	printf("return value is %d\n", ft_printf("%.2u", 0));
	printf("return value is %d\n", printf("%.2u", 0));
	printf("-----------------\n");
	printf("return value is %d\n", ft_printf("%2.2u", 0));
	printf("return value is %d\n", printf("%2.2u", 0));
	printf("-----------------\n");
	printf("return value is %d\n", ft_printf("%61.60u", 0));
	printf("return value is %d\n", printf("%61.60u", 0));
	printf("-----------------\n");
	printf("return value is %d\n", ft_printf("%4.2u", 0));
	printf("return value is %d\n", printf("%4.2u", 0));
	printf("-----------------\n");	
}

int		main(void)
{
	d_test();
	char_test();
	hex_test();
	percentage_test();
	pointer_test();
	str_test();
	u_test();
	return (0);
}
