
int	main(void)
{
	char *str1 = "1234567890";
	char *str2 = "1a2b3c4d5e6f7g8h9i0j";
	char *str3 = "";
	
	int n1 = ft_str_is_numeric(str1);
	int n2 = ft_str_is_numeric(str2);
	int n3 = ft_str_is_numeric(str3);
	
	printf("str1 '%s' ft_str_is_numeric return: %d\n", str1, n1);
	printf("str2 '%s' ft_str_is_numeric return: %d\n", str2, n2);
	printf("str2 '%s' ft_str_is_numeric return: %d\n", str3, n3);

	return (0);
}
