/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 11:32:55 by jmarks            #+#    #+#             */
/*   Updated: 2022/03/09 12:42:38 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
** Searches for the first occurance of the unsigned character c in the
** string pointed to by the argument str. Returns a pointer to the first
** occurence of the character c in the string, or NULL if not found.
*/

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str != '\0' && c != *str)
		str++;
	if (c == *str)
		return ((char *)str);
	return (NULL);
}
