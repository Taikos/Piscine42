void	ft_putchar(char c);

void	ft_print_program_name(char **str)
{
	int a;

	a = 0;
	while (str[0][a] != '\0')
	{
		ft_putchar(str[0][a]);
		a++;
	}
}

int		main(int argc, char **argv)
{
	if (argc >= 1)
		ft_print_program_name(argv);
	ft_putchar('\n');
	return (0);
}
