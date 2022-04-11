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
** Copies n bytes from memory area src to memoray area dst. Returns the value of dst.
*/
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	//make three variables, i is the counter to perform the loop and move through the strings
	//and two char pointer variables to cast our src and dst to
	// set the counter to 0 and cast the paratmer strings to the char pointers csrc and cdst
	size_t	i;
	char	*csrc;
	char	*cdst;

	i = 0;
	csrc = (char *)src;
	cdst = (char *)dst;
	// as long as the counter i is less than n the loop continues
	// i acts as the index postion and places the index postion of csrc into cdst
	// increment and continue until i is no longer less than n and then return dst
	while (i < n)
	{
		cdst[i] = csrc[i];
		i++;
	}
	return (cdst);
}
