/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lambrozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 18:36:08 by lambrozi          #+#    #+#             */
/*   Updated: 2020/02/11 20:54:06 by lambrozi         ###   ########.fr       */
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

	if (!lst)
		return ;
	aux = *lst;
	while (aux != NULL)
	{
		del(aux->content);
		free(aux);
		aux = aux->next;
	}
	*lst = NULL;
}
