#include <stdio.h>
#include <stdlib.h>

static void fprime(int n)
{
	int p = 2;
	if (n == 1) (void)printf("1");
	while(n >= p)
	{
		if (n % p == 0) printf("%d%s", p, (n/=p) > 1 ? "*": "");
		else p++;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		fprime(atoi(av[1]));
	printf("\n");
	return (0);
}
