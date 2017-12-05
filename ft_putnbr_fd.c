#include "libft.h"

void				ft_putnbr_fd(int n, int fd)
{
	unsigned int	n2;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	n2 = (unsigned int)n;
	if (n2 >= 10)
	{
		ft_putnbr_fd(n2 / 10, fd);
		ft_putnbr_fd(n2 % 10, fd);
	}
	else
		ft_putchar_fd(n2 + 48, fd);
}
