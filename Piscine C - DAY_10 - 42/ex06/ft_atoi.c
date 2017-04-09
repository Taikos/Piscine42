#include "doop.h"

int		ft_atoi(char *str)
{
	int a;
	int minus;
	int result;

	a = 0;
	minus = 1;
	result = 0;
	while (str[a] != '\0' && (str[a] == '\t' || str[a] == '\v'
	|| str[a] == '\n' || str[a] == '\r' || str[a] == '\f' || str[a] == ' '))
		a++;
	if (str[a] == '+')
		a++;
	if (str[a] == '-')
	{
		minus = -1;
		a++;
	}
	while (str[a] != '\0' && (str[a] >= '0' && str[a] <= '9'))
	{
		result = (result * 10) + (str[a] - 48);
		a++;
	}
	return (minus * result);
}
