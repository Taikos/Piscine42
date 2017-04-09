#include <unistd.h>

char	only_z(void)
{
	write(1, "z", 1);
	return (0);
}

int		main(void)
{
	only_z();
	return (0);
}
