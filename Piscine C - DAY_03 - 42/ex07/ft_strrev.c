int		ft_strlen(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}

char	*ft_strrev(char *str)
{
	int		x;
	int		y;
	char	temp;

	x = ft_strlen(str) - 1;
	y = 0;
	while (x >= y)
	{
		temp = str[x];
		str[x] = str[y];
		str[y] = temp;
		x--;
		y++;
	}
	return (str);
}
