#include "libft.h"

int			ft_atoi(const char *str)
{
	int		res;
	int		sign;

	res = 0;
	sign = 1;
	while (*str == '\f' || *str == '\n' || *str == '\r' || *str == '\t' ||
			*str == '\v' || *str == ' ')
		str++;
	if (!ft_isdigit(*str))
	{
		if (*str == '-')
			sign = -1;
		else if (*str != '+')
			return (0);
	}
	str++;
	while (ft_isdigit(*str))
		res = res * 10 + (*str++ - '0');
	return (res * sign);
}
