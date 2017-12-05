#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dste;

	i = 0;
	while (dst[i] && i < size)
		i++;
	dste = i;
	while (src[i - dste] && i < (size - 1))
	{
		dst[i] = src[i - dste];
		i++;
	}
	if (dste < size)
		dst[i] = '\0';
	return (dste + ft_strlen(src));
}
