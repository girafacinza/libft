/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lambrozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 18:12:58 by lambrozi          #+#    #+#             */
/*   Updated: 2020/02/19 22:24:23 by lambrozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Deletes and frees the given element and every successor of that element,
** using the function ’del’ and free.
** Finally, the pointer to the list must be set to NULL.
*/

void			ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *aux;

	aux = (*lst);
	if ((*lst) != NULL)
	{
		while (aux != NULL)
		{
			(*lst) = aux->next;
			del(aux->content);
			free(aux);
			aux = (*lst);
		}
	}
	lst = NULL;
}
