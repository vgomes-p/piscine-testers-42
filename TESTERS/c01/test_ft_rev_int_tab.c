
int	main(void)
{
	char	str[] = "!yaw ykliM ,olleH !dlrow ,olleH !24 ,olleH";
	int	size;
	int	tab[sizeof(str) - 1];
	int	i;

	size = sizeof(str) - 1;
	i = 0;
	while (i < size)
	{
		tab[i] = (int)str[i];
		i++;
	}
	printf("Original: ");
	i = 0;
	while (i < size)
	{
		printf("%c", (char)tab[i]);
		i++;
	}
	printf("\n");
	ft_rev_int_tab(tab, size);
	printf("Rev: ");
	i = 0;
	while (i < size)
	{
		printf("%c", (char)tab[i]);
		i++;
	}
	return (0);
}
