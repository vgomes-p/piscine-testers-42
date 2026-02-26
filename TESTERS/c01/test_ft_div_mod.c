
int main()
{
	int	n1 = 378;
	int	n2 = 9;
	int	i = 0;
	int	j = 0;

	ft_div_mod(n1, n2, &i, &j);
	printf("%d divided by %d is %d\n", n1, n2, i);
	printf("Rest of the division of %d by %d is %d", n1, n2, j);
	return (0);
}
