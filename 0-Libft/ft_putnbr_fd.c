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

//int main(void)
//{
//	int i = 0;
//	while (i <= 100)
//	{
//		ft_putnbr_fd(i, 1);
//		write(1, "\n", 1);
//		i++;
//	}
//	i = -2147483648;
//	while (i <= -2147483600)
//	{
//		ft_putnbr_fd(i, 1);
//		write(1, "\n", 1);
//		i++;
//	}
//	return (0);
//}