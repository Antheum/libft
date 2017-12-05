#include "libft.h"

t_list			*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*new;
	void		*dst;
	size_t		buf;

	buf = content_size;
	dst = (void*)content;
	new = (t_list*)malloc(sizeof(*new));
	if (content == NULL)
	{
		new->content = NULL;
		new->content_size = 0;
	}
	else
	{
		new->content = ft_memcpy(dst, (void*)content, content_size);
		new->content_size = buf;
	}
	new->next = NULL;
	return (new);
}
