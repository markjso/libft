/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 17:51:02 by jmarks            #+#    #+#             */
/*   Updated: 2022/03/08 12:22:37 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
** Copies n bytles of the character c (an unsigned char) to the string pointed to by str.
*/
#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	// create a char of s to hold a caste version of void str
	char	*s;

	s = (char *)str;
	// as long as n is greater than 0 we continue the loop
	// place int c inside each index position
	// decrement n until it is no longer greater than 0
	// return str
	while (n > 0)
	{
		*s = c;
		s++;
		n--;
	}
	return (str);
}
