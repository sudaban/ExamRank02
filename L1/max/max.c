int max(int* tab, unsigned int len)
{
	unsigned int i = 1;
	int	max;

	if (!tab || len == 0)
		return (0);
	max = tab[0];
	while (i < len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}