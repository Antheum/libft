#include "libft.h"

char		*ft_strnew(size_t size)
{
	char	*dest;
	size_t	i;

	dest = (char*)malloc(sizeof(*dest) * (size + 1));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i <= size)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
