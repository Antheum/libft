#include "libft.h"

void				ft_putnbr(int n)
{
	unsigned int	n2;

	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	n2 = (unsigned int)n;
	if (n2 >= 10)
	{
		ft_putnbr(n2 / 10);
		ft_putnbr(n2 % 10);
	}
	else
		ft_putchar(n2 + 48);
}
