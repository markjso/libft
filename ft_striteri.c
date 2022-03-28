/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 15:04:24 by jmarks            #+#    #+#             */
/*   Updated: 2022/03/22 15:07:29 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// this function applies the function parameter f to each character of a string 
// passesed in at a specific index postion from the parameter s
void	ft_striteri(char *s, void (*f) (unsigned int, char *))
{
	unsigned int	i;

	if (s != 0 && f != 0)
	{
		i = 0;
		// as long as we are not at the end of the string and our function is not null
		// we start at the beginningof the string and work our way through, applying
		// the function f to each character. 
		while (s[i])
		{
			f(i, s + i);
			i++;
		}
	}
}
