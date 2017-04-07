#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
		j++;
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

int		ft_compteur(int argc, char **argv)
{
	int i;
	int j;
	int temp;

	i = 1;
	j = 0;
	temp = 0;
	while (i < argc)
	{
		while (argv[i][j] != '\0')
			j++;
		temp = temp + j;
		j = 0;
		i++;
	}
	return (temp);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*tab;
	char	enter[2];
	int		compteur;
	int		a;

	enter[0] = '\n';
	compteur = ft_compteur(argc, argv);
	a = 1;
	if (!(tab = (char*)malloc(sizeof(char) * (compteur + (argc - 1)))))
		return (0);
	while (a < argc)
	{
		ft_strcat(tab, argv[a]);
		ft_strcat(tab, enter);
		a++;
	}
	tab[compteur + (argc - 2)] = '\0';
	return (tab);
}
