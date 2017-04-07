void	ft_sort_integer_table(int *tab, int size)
{
	int		a;
	int		b;
	char	temp;

	a = 0;
	b = size;
	while (tab[a] != '\0')
	{
		while (b >= a)
		{
			if (tab[a] > tab[b])
			{
				temp = tab[a];
				tab[a] = tab[b];
				tab[b] = temp;
			}
		}
		a++;
		b--;
	}
}
