int		ft_iterative_power(int nb, int power)
{
	int result;
	int i;

	result = 1;
	if (power == 0)
		return (1);
	else if (power > 0)
	{
		i = 1;
		while (i <= power)
		{
			result = result * nb;
			i++;
		}
		return (result);
	}
	return (0);
}
