#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	char	*dest;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	dest = ft_strnew(ft_strlen(s));
	if (dest == NULL)
		return (NULL);
	while (s[i])
	{
		dest[i] = f(s[i]);
		i++;
	}
	return (dest);
}
