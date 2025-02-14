#include <stdlib.h>
#include <unistd.h>

static void free_list(char **s)
{
	int i = 0;
	while(s[i])
		free(s[i++]);
	free(s);
}

char **ft_split(char *str)
{
	int i = 0, j = 0, k;
	char **ptr = malloc(sizeof(char) * 1000);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32) i++;

	while (str[i])
	{
		if (str[i] > 32)
		{
			ptr[j] = malloc(sizeof(char) * 1000);
			k = 0;
			while(str[i] > 32)
				ptr[j][k++] = str[i++];
			ptr[j][k] = 0;
			j++;
		}
		else i++;
	}
	return ptr;
}


int main(int ac, char **av)
{
	char **lst;
	int i = 1, len;
	if (ac > 1 && (lst = ft_split(av[1])))
	{
		while (lst[i])
		{
			len = 0;
			while(lst[i][len]) len++;
			write(1, lst[i], len);
			write(1, " ", 1);
			i++;
		}
		len = 0;
		while(lst[0][len]) len++;
		write(1, lst[0], len);
		free_list(lst);
	}
	write(1, "\n", 1);
	return 0;
}