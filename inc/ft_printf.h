/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 13:45:24 by jmarks            #+#    #+#             */
/*   Updated: 2022/06/08 11:47:43 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft.h"

int		ft_printf_char(char c);
int		ft_printf_str(char *s);
int		ft_printf_number(int num);
int		ft_printf_hex(size_t num, char *base);
int		ft_puthex(unsigned int num, char *base);
int		ft_printf(const char *format, ...);
int		ft_type_char(const char c, va_list args);
int		ft_printf_ptr(void *ptr);
int		ft_printf_u(unsigned int num);

#endif
