#include	"libft.h"

void				*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dest;
	unsigned char	*srce;
	size_t			k;

	k = 0;
	dest = (unsigned char*)dst;
	srce = (unsigned char*)src;
	while (k < n)
	{
		dest[k] = srce[k];
		if (srce[k] == (unsigned char)c)
			return ((void*)dest + k + 1);
		k++;
	}
	return (NULL);
}
