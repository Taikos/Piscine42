int		ft_button(int i, int j, int k)
{
	if (((i < j) && (j < k)) || ((i > j) && (j > k)))
		return (j);
	else if (((i > j) && (i < k)) || ((i < j) && (i > k)))
		return (i);
	else if (((i > k) && (k < j)) || ((i < k) && (k < j)))
		return (k);
	return (0);
}
