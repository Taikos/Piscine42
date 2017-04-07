int		ft_fibonacci(int index)
{
	int result;

	if (index < 0)
	{
		result = -1;
		return (result);
	}
	else if (index == 0)
	{
		result = 0;
		return (result);
	}
	else if (index == 1)
	{
		result = 1;
		return (result);
	}
	else
	{
		result = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (result);
	}
	return (0);
}
