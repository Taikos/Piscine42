#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *tab;
	int i;

	i = 0;
	if (min >= max)
		return (0);
	if (!(tab = (int *)malloc(sizeof(int) * ((max - min) + 1))))
		return (0);
	while ((min + i) < max)
	{
		tab[i] = min + i;
		i++;
	}
	tab[i] = 0;
	return (tab);
}
