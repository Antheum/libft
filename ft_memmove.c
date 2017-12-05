#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest;
	char	*srce;

	srce = (char*)src;
	dest = (char*)dst;
	if (srce < dest)
	{
		srce = srce + len - 1;
		dest = dest + len - 1;
		while (len > 0)
		{
			*dest-- = *srce--;
			len--;
		}
	}
	else
	{
		while (len > 0)
		{
			*dest++ = *srce++;
			len--;
		}
	}
	return (dst);
}
