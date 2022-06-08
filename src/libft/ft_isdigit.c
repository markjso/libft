/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 15:54:56 by jmarks            #+#    #+#             */
/*   Updated: 2022/03/08 12:25:54 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
** Checks whether a character is numeric (0-9) or not.
** Returns zero if false, else returns non-zero value.
*/

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
