#include <stdlib.h>

int		*ft_range(int start, int end)
{
	int i;
	int *tab;
	int size;

	i = 0;
	if (end >= start)
	{
		size = end - start + 1;
		if (!(tab = (int*)malloc(sizeof(int) * size)))
			return (0);
		while (i < size)
		{
			tab[i] = start + i;
			i++;
		}
		return (&tab[0]);
	}
	else if (start > end)
	{
		size = start - end + 1;
		if (!(tab = (int*)malloc(sizeof(int) * size)))
			return (0);
		while (i < size)
		{
			tab[i] = start - i;
			i++;
		}
		return (&tab[0]);
	}
	return (0);
}
