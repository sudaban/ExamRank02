#include <stdlib.h>

char *ft_itoa(int n)
{
	long num = n;
	int len = (n <= 0);
	char *str;
	for(long temp = num; temp; temp/= 10, len++);
	if (!(str = malloc(len + 1))) return NULL;

	str[len] = 0;
	if (num < 0) str[0] = '-', num = -num;
	while(len-- > (n < 0)) str[len] = '0' + (num % 10), num /= 10;
	return str;
}