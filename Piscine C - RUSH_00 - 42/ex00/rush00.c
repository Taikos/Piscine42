void	ft_putchar(char c);

void	ft_display(int i, int j, int a, int b)
{
	if ((i == 0 && j == 0) || (i == 0 && j == a - 1))
		ft_putchar('o');
	else if ((i == b - 1 && j == 0) || (i == b - 1 && j == a - 1))
		ft_putchar('o');
	else if ((i == 0 || i == b - 1) && (j > 0 && j < a - 1))
		ft_putchar('-');
	else if ((i > 0 && i < b - 1) && (j == 0 || j == a - 1))
		ft_putchar('|');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int i;
	int j;

	i = 0;
	if (x > 0 && y > 0)
	{
		while (i < y)
		{
			j = 0;
			while (j < x)
			{
				ft_display(i, j, x, y);
				j++;
			}
			ft_putchar('\n');
			i++;
		}
	}
}
