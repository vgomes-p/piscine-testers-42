int main()
{
	char	*str1 = "Hello, 42 Global! Hello, world!";
	char	*str2 = "Hello, 42 Global! Hello, world!";
	char	*str3 = "Hello, Solar system!";

	int ret1 = ft_strcmp(str1, str2);
	int ret2 = ft_strcmp(str1, str3);
	int ret3 = ft_strcmp(str3, str2);

	if ((ret1 == 0) && (ret2 < 0) && (ret3 > 0))
	{
		printf("'%s' is equal to '%s'!\n", str1, str2);
		printf("'%s' is less than '%s'!\n", str1, str3);
		printf("'%s' is greater than '%s'!\n", str3, str2);
	}
	else
	{
		printf("'%s' is equal to '%s', ft_strcmp should return 0 and returned %d\n", str1, str2, ret1);
		printf("'%s' is less than '%s', ft_strcmp should return a value <0 and returned %d\n", str1, str3, ret2);
		printf("'%s' is greater than '%s', ft_strcmp should return a value >0 and returned %d\n", str3, str2, ret3);
	}
}