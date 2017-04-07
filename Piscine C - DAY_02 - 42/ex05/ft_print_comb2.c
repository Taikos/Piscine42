void	ft_putchar(char c);

int		ft_paire(int a, int b)
{
	ft_putchar((a / 10) + 48);
	ft_putchar((a % 10) + 48);
	ft_putchar(' ');
	ft_putchar((b / 10) + 48);
	ft_putchar((b % 10) + 48);
	return (0);
}

int		ft_virgule(void)
{
	ft_putchar(',');
	ft_putchar(' ');
	return (0);
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_paire(a, b);
			if ((a != 98) || (b != 99))
			{
				ft_virgule();
			}
			b++;
		}
		a++;
	}
}
