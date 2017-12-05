#include	"libft.h"

void			*ft_memalloc(size_t size)
{
	void		*dest;

	dest = (void*)malloc(sizeof(*dest) * size);
	if (dest == NULL)
		return (NULL);
	ft_memset(dest, 0, size);
	return (dest);
}
