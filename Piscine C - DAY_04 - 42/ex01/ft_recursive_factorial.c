int		ft_recursive_factorial(int nb)
{
	int fact;

	fact = 1;
	if ((nb >= 0) && (nb < 13))
	{
		if (nb == 0)
			fact = 1;
		else
			fact = nb * ft_recursive_factorial(nb - 1);
		return (fact);
	}
	return (0);
}
