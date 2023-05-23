/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulorod <paulorod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:38:08 by paulorod          #+#    #+#             */
/*   Updated: 2023/05/08 22:53:38 by paulorod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdint.h>
# include "libft/libft.h"

int		ft_printf(const char *format, ...);
int		is_format_char(char c);
int		valid_formats(char *format);
int		ft_print_formats(char *fmt, int i, va_list args);
int		ft_print_string(char *s);
int		ft_print_char(char c);
int		ft_print_int(int nbr);
int		ft_print_uint(int nbr);
int		ft_print_pointer(void *ptr);
int		ft_print_hex(unsigned int nbr, char *base);
int		ft_print_percentage(char *s);
void	ft_print_percentage_arg(char *fmt, int *w_bytes, int *i);

#endif
