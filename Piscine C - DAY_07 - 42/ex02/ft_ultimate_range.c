#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *tab;

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	if (!(tab = (int*)malloc(sizeof(int) * ((max - min) + 1))))
		return (0);
	while ((min + i) < max)
	{
		tab[i] = min + i;
		i++;
	}
	*range = tab;
	return (i);
}
