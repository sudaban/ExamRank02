#include <unistd.h>

void	rot_13(char *str)
{
	int	idx = 0;

	while (str[idx] != '\0')
	{
		if ((str[idx] >= 'A' && str[idx] <= 'M') || (str[idx] >= 'a' && str[idx] <= 'm'))
			str[idx] += 13;
		else if ((str[idx] >= 'N' && str[idx] <= 'Z') || (str[idx] >= 'n' && str[idx] <= 'z'))
			str[idx] -= 13;
		write(1, &str[idx], 1);
		idx++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		rot_13(argv[1]);
	write(1, "\n", 1);
	return (0);
}