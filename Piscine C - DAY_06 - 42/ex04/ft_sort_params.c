void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		ft_putchar(str[a]);
		a++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0')
	{
		if ((s1[i] < s2[i]) || (s1[i] > s2[i]))
			return (s1[i] - s2[i]);
		i++;
	}
	if ((s1[i] < s2[i]) || (s1[i] > s2[i]))
		return (s1[i] - s2[i]);
	return (0);
}

void	ft_print(int argc, char **argv)
{
	int y;

	y = 1;
	while (y < argc)
	{
		ft_putstr(argv[y]);
		ft_putchar('\n');
		y++;
	}
}

int		main(int argc, char **argv)
{
	int		y;
	char	*temp;

	y = 1;
	while (y < argc)
	{
		if (argv[y + 1] != '\0')
		{
			if (ft_strcmp(argv[y], argv[y + 1]) > 0)
			{
				temp = argv[y];
				argv[y] = argv[y + 1];
				argv[y + 1] = temp;
				y = 0;
			}
		}
		y++;
	}
	ft_print(argc, argv);
	return (0);
}
