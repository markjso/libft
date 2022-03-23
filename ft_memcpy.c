/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 17:06:59 by jmarks            #+#    #+#             */
/*   Updated: 2022/03/09 12:08:47 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
** Copies n characters from memory area src to memoray area dst.
*/
#include "libft.h"

void	*ft_memcpy(void *dst, const void *restrict src, size_t n)
{
	size_t	i;
	char	*csrc;
	char	*cdst;

	if (!dst && !src)
		return (0);
	i = 0;
	csrc = (char *)src;
	cdst = (char *)dst;
	while (i < n)
	{
		cdst[i] = csrc[i];
		i++;
	}
	return (cdst);
}
