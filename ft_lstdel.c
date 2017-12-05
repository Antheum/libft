#include "libft.h"

void			ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list		*next;

	next = *alst;
	if (alst)
	{
		while (next->next)
		{
			ft_lstdelone(&next, del);
			next = (*alst)->next;
		}
		ft_lstdelone(&next, del);
		*alst = NULL;
	}
}
