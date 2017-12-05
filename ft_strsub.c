#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	k;
	size_t	i;
	char	*dest;
	char	*srce;

	srce = (char*)s;
	k = (size_t)start;
	dest = ft_strnew(len);
	if (dest == NULL)
		return (NULL);
	i = 0;
	if (!s)
		return (NULL);
	while (i < len)
	{
		dest[i] = srce[start];
		i++;
		start++;
	}
	return (dest);
}
