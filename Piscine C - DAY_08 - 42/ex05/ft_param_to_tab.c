#include "ft_stock_par.h"
#include <stdlib.h>

int					ft_strlen(char *str)
{
	int				a;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}

char				*ft_strdup(char *src)
{
	int				count;
	char			*dest;

	count = 0;
	while (src[count] != '\0')
		count++;
	if (!(dest = (char *)malloc(sizeof(char) * (count))))
		return (0);
	count = 0;
	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par		*para;
	int				i;

	i = 0;
	if (!(para = (t_stock_par*)malloc(sizeof(t_stock_par) * (ac + 1))))
		return (0);
	while (i < ac)
	{
		para[i].size_param = ft_strlen(av[i]);
		para[i].str = av[i];
		para[i].copy = ft_strdup(av[i]);
		para[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	para[i].str = 0;
	return (para);
}
