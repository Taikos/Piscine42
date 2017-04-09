#include <unistd.h>

char	first_word(int argc, char **argv)
{
	int		j;

	if (argc == 2)
	{
		j = 0;
		while (argv[1][j] != '\0' && (argv[1][j] == ' ' || argv[1][j] == '\t'))
			j++;
		while (argv[1][j] != '\0' && argv[1][j] != ' ' && argv[1][j] != '\t')
		{
			write(1, &argv[1][j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

int		main(int argc, char **argv)
{
	first_word(argc, argv);
	return (0);
}
