/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lambrozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 18:36:08 by lambrozi          #+#    #+#             */
/*   Updated: 2020/02/04 18:45:59 by lambrozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *aux;

	if(!lst)
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
