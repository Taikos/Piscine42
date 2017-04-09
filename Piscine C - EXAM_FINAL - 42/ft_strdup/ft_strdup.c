#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		count;
	char	*dest;

	i = 0;
	count = 0;
	while (src[i] != '\0')
	{
		count++;
		i++;
	}
	i = 0;
	if (!(dest = (char*)malloc(sizeof(char) * count)))
		return (0);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
