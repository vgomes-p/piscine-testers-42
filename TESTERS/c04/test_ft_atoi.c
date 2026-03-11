
int	main()
{
	char *arg1 = " ---+--+1234ab567";
	int aret1 = ft_atoi(arg1);
	char *arg2 = "    42 is a great school!";
	int aret2 = ft_atoi(arg2);
	char *arg3 = "We don't talk about 1toa, n0, n0, n0!";
	int aret3 = ft_atoi(arg3);
	if ((aret1 == -1234) && (aret2 == 42) && (aret3 == 0))
	{
		printf("'%s' ft_atoied returned %d\n", arg1, aret1);
		printf("'%s' ft_atoied returned %d\n", arg2, aret2);
		printf("'%s' ft_atoied returned %d\n", arg3, aret3);
		return (0);
	}
	printf("'%s' ft_atoied should return -1234 and returned %d\n", arg1, aret1);
	printf("'%s' ft_atoied should return 42 and returned %d\n", arg2, aret2);
	printf("'%s' ft_atoied should return 0 and returned %d\n", arg3, aret3);
	return (1);
}
