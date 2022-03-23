/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 16:31:18 by jmarks            #+#    #+#             */
/*   Updated: 2022/03/09 11:52:00 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
** Compares at most the first n bytes of s1 and s2.
** Returns value 0 if bytes are equal.
** Else returns < or > 0 difference.
*/
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*src;
	unsigned char	*dst;

	i = 0;
	src = (unsigned char *)s1;
	dst = (unsigned char *)s2;
	while ((i < n) && (src[i] != '\0' || dst[i] != '\0'))
	{
		if (dst[i] == src[i])
		{
			i++;
		}
		else if (src[i] != dst[i])
			return (src[i] - dst[i]);
	}
	return (0);
}
