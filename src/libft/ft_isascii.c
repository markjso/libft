/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 16:21:11 by jmarks            #+#    #+#             */
/*   Updated: 2022/03/08 12:20:18 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
** checks if c is an ascii character or not. (Use '0x80' to test if false)
** Returns zero if false & non-zero if true.
*/
#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
