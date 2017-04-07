int		ft_is_prime(int nb)
{
	long i;

	if (nb <= 0 || nb == 1)
		return (0);
	if (nb % 2 == 0 && nb != 2)
		return (0);
	if (nb == 2)
		return (1);
	i = 3;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i = i + 2;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
