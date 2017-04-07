void	ft_putchar(char c);

int		ft_suite(int a, int b, int c)
{
	a = a + 48;
	b = b + 48;
	c = c + 48;
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	return (0);
}

int		ft_virgule(void)
{
	ft_putchar(',');
	ft_putchar(' ');
	return (0);
}

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				ft_suite(a, b, c);
				if ((a != 7) || (b != 8) || (c != 9))
				{
					ft_virgule();
				}
				c++;
			}
			b++;
		}
		a++;
	}
}
