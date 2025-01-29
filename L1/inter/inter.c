#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i = 0, j;
	int	table[256] = {};

	if (argc == 3)
    {
		while (argv[1][i])
		{
			j = 0;
			while (argv[2][j])
			{
				if (argv[1][i] == argv[2][j] && !table[(int)argv[2][j]])
				{
					table[(int)argv[2][j]] = 1;
					write(1, &argv[2][j], 1);
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
