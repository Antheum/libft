#include	"libft.h"

char		*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t		i;
	size_t		j;
	size_t		current_pos;

	if (s2[0] == '\0')
		return ((char*)s1);
	i = 0;
	while (s1[i] && i < n)
	{
		j = 0;
		if (s1[i] == s2[j])
		{
			current_pos = i;
			while (s1[i] == s2[j] && s2[j] && i < n)
			{
				i++;
				j++;
			}
			if (s2[j] == '\0')
				return ((char*)s1 + current_pos);
			i = current_pos;
		}
		i++;
	}
	return (NULL);
}
