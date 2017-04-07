void	ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	char alphabet_reverse;

	alphabet_reverse = 'z';
	while (alphabet_reverse >= 'a')
	{
		ft_putchar(alphabet_reverse);
		alphabet_reverse--;
	}
}
