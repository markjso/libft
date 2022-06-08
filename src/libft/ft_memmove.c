/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 12:06:56 by jmarks            #+#    #+#             */
/*   Updated: 2022/03/09 12:11:44 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
** copies n bytes from src string to dst string. The two strings may overlap.
** returns dst
*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;

	// we call a variable of i to compare to n
	// if the length of dst string is greater than src string then while n is greater than zero
	// the char cast of dst = the char cast of src starting from the end of the string
	// decrement n until it is less than zero
	// return dst
	
	if (dst > src)
	{
		while (n > 0)
		{
			((char *)dst)[n - 1] = ((char *)src)[n - 1];
			n--;
		}
	}
	// else i is set to 0 or the start of the string
	// as long as is is less than n the loop continues
	// if i is less than n than the char cast of dst = the char cast of src starting from the first character
	// return dst
	else
	{
		i = 0;
		while (i < n)
		{
			*(char *)(dst + i) = *(char *)(src + i);
		i++;
		}
	}
	return (dst);
}
