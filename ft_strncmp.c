#include	"libft.h"

int						ft_strncmp(char const *s1, char const *s2, size_t n)
{
	size_t				i;
	unsigned char		*str1;
	unsigned char		*str2;

	str1 = (unsigned char*)s1;
	str2 = (unsigned char*)s2;
	i = 0;
	while ((s1[i] || s2[i]) && str1[i] == str2[i] && i < n)
		i++;
	if (i == n)
		return (0);
	return (str1[i] - str2[i]);
}
