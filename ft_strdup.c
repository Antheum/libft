#include "libft.h"

char		*ft_strdup(char const *s)
{
	int		i;
	char	*dest;

	i = 0;
	dest = ft_strnew(ft_strlen(s));
	if (dest == NULL)
		return (NULL);
	while (s[i])
	{
		dest[i] = (char)s[i];
		i++;
	}
	return (dest);
}
