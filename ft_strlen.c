/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 17:35:07 by jmarks            #+#    #+#             */
/*   Updated: 2022/03/08 12:41:16 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
** Calculates the length of the string str up to, but not including, the
** terminating null character and returns the length.
*/
#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
