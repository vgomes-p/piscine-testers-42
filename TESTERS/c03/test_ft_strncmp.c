
int main()
{
	char	*str1 = "Hello, 42 Global! Hello, world!";
	char	*str2 = "Hello, 42 Global! Hello, world!";
	char	*str3 = "Hello, Solar system!";

	int	ret1 = ft_strncmp(str1, str2, 6);
	int	ret2 = ft_strncmp(str1, str3, 8);
	int	ret3 = ft_strncmp(str3, str2, 10);
	int	ret4 = ft_strncmp(str1, str2, 0);

	if ((ret1 == 0) && (ret2 < 0) && (ret3 > 0) && (ret4 == 0))
	{
		printf("'%s' is equal to '%s'!\n", str1, str2);
		printf("'%s' is less than '%s'!\n", str1, str3);
		printf("'%s' is greater than '%s'!\n", str3, str2);
		printf("n is 0 and ft_strncmp returned 0!\n");
	}
	else
	{
		printf("'%s' is equal to '%s', ft_strncmp should return 0 and returned %d\n", str1, str2, ret1);
		printf("'%s' is less than '%s', ft_strncmp should return a value <0 and returned %d\n", str1, str3, ret2);
		printf("'%s' is greater than '%s', ft_strncmp should return a value >0 and returned %d\n", str3, str2, ret3);
		printf("n is 0, ft_strncmp should return 0 and returned %d\n", ret4);
	}
}
