#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	int		i;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return ((char*)s2);
	if (!s2)
		return ((char*)s1);
	join = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (join == NULL)
		return (NULL);
	i = 0;
	while (*s1)
	{
		join[i] = (char)*s1++;
		i++;
	}
	while (*s2)
	{
		join[i] = (char)*s2++;
		i++;
	}
	return (join);
}
