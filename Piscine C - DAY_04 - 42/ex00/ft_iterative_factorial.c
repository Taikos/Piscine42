int		ft_iterative_factorial(int nb)
{
	int i;
	int fact;

	fact = 1;
	if ((nb >= 0) && (nb < 13))
	{
		if (nb == 0)
		{
			fact = 1;
		}
		else
		{
			i = 0;
			while (i <= (nb - 1))
			{
				fact = (nb - i) * fact;
				i++;
			}
		}
		return (fact);
	}
	else
		return (0);
}
