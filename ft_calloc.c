/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 13:47:51 by jmarks            #+#    #+#             */
/*   Updated: 2022/03/08 11:26:34 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
** Allocates the requested memory and returns a pointer to it.
** Sets the allocated memory to zero. Returns null if the request fails.
*/

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(size * count);
	if (ptr == NULL)
		return (0);
	ft_bzero(ptr, size * count);
	return (ptr);
}
