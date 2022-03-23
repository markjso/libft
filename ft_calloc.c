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
** Sets the allocated memory to zero using the ft_bzero function. 
** Returns NULL if the request fails.
*/

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	//use a void pointer here of ptr so that any type of data can be applied
	void	*ptr;

	// allocte memory based on the count multipled by size variables in our parameter
	// if the memory allocation fails return NULL.
	// otherwise run bzero function on the allocated zone of memory ptr and give it our size times count parameter
	// return the void variable ptr
	ptr = malloc(size * count);
	if (ptr == NULL)
		return (0);
	ft_bzero(ptr, size * count);
	return (ptr);
}
