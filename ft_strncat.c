#include	"libft.h"

char		*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen((const char*)s1);
	while (i < n && s2[i])
	{
		s1[len] = s2[i];
		len++;
		i++;
	}
	s1[len] = '\0';
	return (s1);
}
