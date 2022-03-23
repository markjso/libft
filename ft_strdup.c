/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 15:25:09 by jmarks            #+#    #+#             */
/*   Updated: 2022/03/08 16:56:26 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** this function allocates sufficient memory for a copy of the string s1,
** does the copy and returns a pointer to it.
** the original string is fetched and then the malloc function allocates
** space for the duplicate + one character.
** if the allocation fails return NULL
*/

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	int		x;
	char	*s2;

	len = 0;
	x = ft_strlen(s1);
	s2 = (char *)malloc(sizeof(*s1) * (x + 1));
	if (!s2)
		return (NULL);
	while (len < x)
	{
		s2[len] = s1[len];
		len++;
	}
	s2[len] = 0;
	return (s2);
}
