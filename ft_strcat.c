#include	"libft.h"

char		*ft_strcat(char *s1, const char *s2)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen((const char*)s1);
	while (s2[i])
	{
		s1[len] = (char)s2[i];
		len++;
		i++;
	}
	s1[len] = '\0';
	return (s1);
}
