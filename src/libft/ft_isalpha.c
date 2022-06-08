/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:53:25 by jmarks            #+#    #+#             */
/*   Updated: 2022/03/08 12:10:07 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Checks if the character c is alphabetic. Returns non-zero if true
** Else it returns 0.
*/
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
