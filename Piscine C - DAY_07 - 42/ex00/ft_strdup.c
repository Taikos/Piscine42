#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		count;
	char	*dest;

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
