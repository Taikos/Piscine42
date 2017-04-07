int		ft_recursive_power(int nb, int power)
{
	int result;

	result = 1;
	if (power == 0)
	{
		result = 1;
		return (result);
	}
	else if (power > 0)
	{
		result = nb * ft_recursive_power(nb, (power - 1));
		return (result);
	}
	return (0);
}
