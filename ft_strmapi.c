#include "libft.h"

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*src;
	char			*dest;
	unsigned int	i;

	src = (char*)s;
	i = 0;
	if (src == NULL)
		return (NULL);
	dest = ft_strnew(ft_strlen(s));
	if (dest == NULL)
		return (NULL);
	while (s[i])
	{
		dest[i] = f(i, s[i]);
		i++;
	}
	return (dest);
}
