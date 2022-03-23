/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 17:27:18 by jmarks            #+#    #+#             */
/*   Updated: 2022/03/08 12:26:56 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
** Checks wither a character is a printable character or not.
** Returns zero if false, else returns a non zero value.
*/
#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
