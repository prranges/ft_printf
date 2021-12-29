/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prranges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 16:25:59 by prranges          #+#    #+#             */
/*   Updated: 2021/07/08 08:44:26 by prranges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

typedef struct s_flags
{
	int	minus;
	int	zero;
	int	prec;
	int	width;
	int	star;
}				t_flags;

int		ft_printf(const char *format, ...);
size_t	ft_putchar_len(char c);
size_t	ft_strlen(const char *str);
size_t	ft_putstr_len(char *s, int prec);
char	*ft_strdup(const char *s1);
char	*ft_base_converter(long long int num, int base, int CAPS);
size_t	ft_c_spec(int x, t_flags flags);
size_t	ft_s_spec(char *s, t_flags flags);
size_t	ft_d_i_spec(int x, t_flags flags);
size_t	ft_x_X_spec(unsigned int x, int CAPS, t_flags flags);
size_t	ft_u_spec(unsigned int x, t_flags flags);
size_t	ft_p_spec(unsigned long x, t_flags flags);
size_t	ft_parse_spec(char *s, va_list ap);
int		ft_find_flag(char *s, va_list ap, t_flags *flags, int i);
size_t	ft_add_width(t_flags flags, size_t len);

#endif
