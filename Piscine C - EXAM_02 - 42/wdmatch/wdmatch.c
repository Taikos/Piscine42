#include <unistd.h>

char	wdmatch(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (argc == 3)
	{
		while (argv[2][j] != '\0')
		{
			if (argv[2][j] == argv[1][i])
				i++;
			j++;
		}
		if (argv[1][i] == '\0')
		{
			i = 0;
			while (argv[1][i] != '\0')
			{
				write(1, &argv[1][i], 1);
				i++;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}

int		main(int argc, char **argv)
{
	wdmatch(argc, argv);
	return (0);
}
