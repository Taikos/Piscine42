char	*ft_rot42(char *str)
{
	int tab;

	tab = 0;
	while (str[tab] != '\0')
	{
		if (((str[tab] <= 'j') && (str[tab] >= 'a')) ||
			((str[tab] <= 'J') && (str[tab] >= 'A')))
		{
			str[tab] = str[tab] + 16;
		}
		else if (((str[tab] <= 'z') && (str[tab] >= 'k')) ||
			((str[tab] <= 'Z') && (str[tab] >= 'K')))
		{
			str[tab] = str[tab] - 10;
		}
		tab++;
	}
	return (str);
}
