#include <unistd.h>

static void rev_wstr(char *s)
{
	int i = 0, end;
	while(s[i]) i++;
	end = i;
	while(--i >= 0)
		if (s[i] == 32 || s[i] == 9 || i == 0)
		{
			write(1, s + i + (i ? 1 : i), end - i - (i ? 1 : 0));
			if (i) write(1, " ", 1);
			end = i;
		}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		rev_wstr(av[1]);
	write(1, "\n", 1);
	return (0);
}
