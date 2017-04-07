#include <stdlib.h>

char	**insert(char *str, char **tab, int a)
{
	int word;
	int y;
	int temp;

	word = 0;
	y = -1;
	temp = 0;
	while (word <= a && str[y + 1] != '\0')
	{
		y++;
		if (str[y] != '\0' && str[y] != ' ' && str[y] != '\n' && str[y] != '\t')
		{
			while (str[y] != '\0'
				&& (str[y] != ' ' && str[y] != '\n' && str[y] != '\t'))
			{
				tab[word][temp] = str[y];
				y++;
				temp++;
			}
			tab[word][temp] = '\0';
			word++;
		}
		temp = 0;
	}
	return (tab);
}

int		letter_count(char *str, int a)
{
	int word;
	int j;
	int temp;

	word = 0;
	j = -1;
	temp = 0;
	while (word <= a)
	{
		j++;
		if (str[j] != ' ' && str[j] != '\n' && str[j] != '\t')
		{
			while (str[j] != '\0'
				&& (str[j] != ' ' && str[j] != '\n' && str[j] != '\t'))
			{
				temp++;
				j++;
			}
			if (word == a)
				return (temp);
			word++;
		}
		temp = 0;
	}
	return (0);
}

int		word_count(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0'
			&& (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'))
			i++;
		if (str[i] != '\0'
			&& (str[i] != ' ' && str[i] != '\n' && str[i] != '\t'))
		{
			while (str[i] != '\0'
				&& (str[i] != ' ' && str[i] != '\n' && str[i] != '\t'))
				i++;
			count++;
		}
	}
	return (count);
}

char	**ft_split_whitespaces(char *str)
{
	char	**tab;
	int		size;
	int		a;

	if (!(str))
		return (0);
	size = word_count(str);
	a = 0;
	tab = (char**)malloc(sizeof(char*) * (word_count(str) + 1));
	if (tab == 0)
		return (0);
	while (a < size)
	{
		tab[a] = (char*)malloc(sizeof(char) * (letter_count(str, a) + 1));
		if (tab[a] == 0)
			return (0);
		a++;
	}
	tab[a] = (char*)malloc(sizeof(char) * (1));
	insert(str, tab, a);
	tab[a] = 0;
	return (tab);
}
