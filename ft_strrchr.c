/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 14:54:23 by jmarks            #+#    #+#             */
/*   Updated: 2022/03/08 12:32:58 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
** Searches for the last occurence of the unsigned char c in the string
** pointed to by the argument str. Returns a pointer to the last
** occurrence of the character in str or NULL if not found.
*/
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
			i++;
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return ((char *)(str + i));
		i--;
	}
	return (NULL);
}
