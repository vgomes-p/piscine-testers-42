
int	main(void)
{
	char *str1 = "abcdefgHIJKLMNOPqrstuvWXYZ";
	char *str2 = "abcerfg799010901qrstuv3675";
	char *str3 = "";
	
	int n1 = ft_str_is_alpha(str1);
	int n2 = ft_str_is_alpha(str2);
	int n3 = ft_str_is_alpha(str3);
	
	printf("str1 '%s' ft_str_is_alpha return: %d\n", str1, n1);
	printf("str2 '%s' ft_str_is_alpha return: %d\n", str2, n2);
	printf("str2 '%s' ft_str_is_alpha return: %d\n", str3, n3);

	return (0);
}
