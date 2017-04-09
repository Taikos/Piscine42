#include "doop.h"

void	ft_putnbr(int nb)
{
	if (nb == (-2147483648))
	{
		ft_putnbr(-214748364);
		ft_putchar(8 + 48);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		ft_putnbr(nb);
	}
	else if (nb <= 9)
	{
		ft_putchar(nb + 48);
	}
	else
	{
		ft_putnbr((nb / 10));
		ft_putnbr((nb % 10));
	}
}
