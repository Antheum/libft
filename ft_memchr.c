#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*ss;
	size_t	i;

	ss = (char*)s;
	i = 0;
	while ((i < n) && ss[i] != (char)c)
		i++;
	if (i == n)
		return (NULL);
	else
		return ((void*)s + i);
}
