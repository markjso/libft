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
* The calloc() function is used to allocate a specified amount of memory and then initialize it to zero. 
* The function returns a void pointer to this memory location, which can then be cast to the desired type. 
* The function takes in two parameters that collectively specify the amount of memory to be allocated.
* Sets the allocated memory to zero using the ft_bzero function.
* Returns NULL if the request fails.
*/

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	//use a void pointer here of ptr so that any type of data can be applied
	void	*ptr;

	// allocte memory based on the count multipled by size variables in our parameter
	// if the memory allocation fails return NULL.
	// otherwise use our bzero function to initialize the allocated memory to zero, passing in two functions
	// return the void pointer (ptr).
	ptr = malloc(size * count);
	if (ptr == NULL)
		return (0);
	ft_bzero(ptr, size * count);
	return (ptr);
}
