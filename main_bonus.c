//#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
t_list	*ft_lstlast(t_list *lst);
int		ft_lstsize(t_list *lst);
void	ft_lstiter(t_list *lst, void (*f)(void *));

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *newlist;

	if (!lst)
		return NULL;
	newlist = ft_lstnew(lst);
	lst = lst->next;
	while (lst != NULL)
	{
		ft_lstadd_front(&newlist, ft_lstnew(lst);
		lst = lst->next;
	}
	ft_lstiter(
}

void	printf_list(t_list *node)
{
	while (node != NULL)
	{
		printf("[%s]", (char *)node->content);
		node = node->next; 
	}
	printf("(null)");
}

int	main(void)
{
	t_list *head = NULL;

	ft_lstadd_front(&head, ft_lstnew("42"));
	ft_lstadd_front(&head, ft_lstnew(""));
	ft_lstadd_front(&head, ft_lstnew("sp"));
	ft_lstadd_back(&head, ft_lstnew("back"));
	

	printf_list(head);

	printf("\nsize=%d", ft_lstsize(head));
	printf("\nlast=");
	printf_list(ft_lstlast(head));

}
