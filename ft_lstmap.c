#include "libft.h"

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*next;
	t_list		*newlst;

	if (!(newlst = ft_lstnew(lst->content, lst->size)
		return (NULL);
	newlst = f(lst);
	next = newlst;
	while (lst)
	{
		if (!(newlst = ft_lstnew(lst->content, lst->content_size))
			return (NULL);
		newlst = f(lst);
		ft_lstadd(&next, newlst);
		next = next->next;
		lst = lst->next;
	}
	return (next);
}
