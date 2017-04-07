int		ft_count(int a)
{
	if (a < 2)
		return (0);
	return (a + ft_count(a - 91));
}

int		ft_eight_queens_puzzle(void)
{
	return (ft_count(92));
}
