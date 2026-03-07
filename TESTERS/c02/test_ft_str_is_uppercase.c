
int	main(void)
{
	char *str1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *str2 = "aBcDeFgHiJkLmNoPqRsTuVwXyZ";
	char *str3 = "";
	
	int n1 = ft_str_is_uppercase(str1);
	int n2 = ft_str_is_uppercase(str2);
	int n3 = ft_str_is_uppercase(str3);
	
	printf("str1 '%s' ft_str_is_uppercase return: %d\n", str1, n1);
	printf("str2 '%s' ft_str_is_uppercase return: %d\n", str2, n2);
	printf("str2 '%s' ft_str_is_uppercase return: %d\n", str3, n3);

	return (0);
}
