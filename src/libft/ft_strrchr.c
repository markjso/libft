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
	// while we are not at the end of the string increment i
	while (str[i])
			i++;
	// while i is not negative
	// check if cast char c is here. If not decrement i until c is located
	// once located, return the array of str from the location of i onwards
	// otherwise reutn NULL
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return ((char *)(str + i));
		i--;
	}
	return (NULL);
}
