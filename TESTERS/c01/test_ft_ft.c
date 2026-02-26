
int main()
{
	int i;
	int *j;
	int temp;

	i = 210;
	temp = 210;
	j = &i;
	while (temp >= 0)
	{
		ft_ft(j);
		printf("%d\n", temp);
		printf("%d\n", i);
		temp = temp - i;
		i = temp;
	}
}
