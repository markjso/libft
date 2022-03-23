/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 11:47:44 by jmarks            #+#    #+#             */
/*   Updated: 2022/03/08 11:53:51 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
** Converts a lowercase alphabet to an uppercase alphabet.
*/
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = ((c - 'a') + 'A');
	return (c);
}