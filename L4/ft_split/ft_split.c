#include <stdlib.h>

char **ft_split(char *str)
{
	int i = 0, j = 0, k;
	char **ptr = malloc(sizeof(char) *1000);
	while((str[i] >= 9 && str[i] <= 13) || str[i] == 32) i++;
	while(str[i])
	{
		if (str[i] > 32)
		{
			ptr[j] = malloc(sizeof(char) * 1000);
			k = 0;
			while(str[i] > 32) ptr[j][k++] = str[i++];
			ptr[j][k] = 0;
			j++;
		}
		else i++;
	}
	return ptr;
}