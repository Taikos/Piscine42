int		ft_sqrt(int nb)
{
	long a;

	if (nb <= 0)
	{
		return (0);
	}
	a = 0;
	while (a * a <= nb)
	{
		if (a * a == nb)
		{
			return (a);
		}
		a++;
	}
	return (0);
}
