#include	"libft.h"

void			*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dstdst;
	char		*srcsrc;
	size_t		i;

	i = 0;
	dstdst = (char*)dst;
	srcsrc = (char*)src;
	while (i < n)
	{
		dstdst[i] = srcsrc[i];
		i++;
	}
	return (dst);
}
