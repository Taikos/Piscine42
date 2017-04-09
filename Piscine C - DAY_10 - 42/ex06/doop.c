#include "doop.h"

void	display(int result)
{
	ft_putnbr(result);
	ft_putchar('\n');
}

int		calcul(char *ar1, char *ar2, char *ar3)
{
	int result;

	result = 0;
	if (ar2[0] == '+')
		result = ft_atoi(ar1) + ft_atoi(ar3);
	if (ar2[0] == '-')
		result = ft_atoi(ar1) - ft_atoi(ar3);
	if (ar2[0] == '*')
		result = ft_atoi(ar1) * ft_atoi(ar3);
	if (ft_atoi(ar3) == 0 && ar2[0] == '/')
	{
		ft_putstr("Stop : division by zero\n");
		return (0);
	}
	if (ar2[0] == '/')
		result = ft_atoi(ar1) / ft_atoi(ar3);
	if (ft_atoi(ar3) == 0 && ar2[0] == '%')
	{
		ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	if (ar2[0] == '%')
		result = ft_atoi(ar1) % ft_atoi(ar3);
	display(result);
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc == 4)
		calcul(argv[1], argv[2], argv[3]);
	return (0);
}
