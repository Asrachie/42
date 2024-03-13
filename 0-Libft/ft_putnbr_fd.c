#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	v_n;

	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else if (n < 0)
	{
		write(fd, "-", 1);
		ft_putnbr_fd(-n, fd);
	}
	else if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
	{
		v_n = n + '0';
		write(fd, &v_n, 1);
	}
}
