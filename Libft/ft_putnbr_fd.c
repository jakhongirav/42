#include "libft.h"

static void	put_long_fd(long num, int fd)
{
	char	c;

	if (num >= 10)
		put_long_fd(num / 10, fd);
	c = (num % 10) + '0';
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	long	num;

	num = n;
	if (num < 0)
	{
		write(fd, "-", 1);
		num = -num;
	}
	put_long_fd(num, fd);
}
