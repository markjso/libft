/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 17:07:04 by jmarks            #+#    #+#             */
/*   Updated: 2022/03/22 17:30:31 by jmarks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	if (new != NULL)
		return (NULL);
	if (!*lst)
	{
		*lst = new;
		return (NULL);
	}
	current = ft_lstlast(*lst);
	current->next = new;
}
