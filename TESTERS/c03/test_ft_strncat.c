
int main()
{
	char str1[70] = "Hello, 42 Global! Hello, World, ";
	char str1_1[70] = "Hello, 42 Global! Hello, World, ";
	printf("First string: '%s'\n", str1);
	char *str2 = "Hello, Solar System! Hello, Milky way!";
	printf("Second string: '%s'\n", str2);
	char *dest1 = ft_strncat(str1, str2, 20);
	printf("Strings cat: '%s'\n", dest1);
	char *dest2 = ft_strncat(str1_1, str2, 0);
	printf("Strings cat with n = 0: '%s'\n", dest2);
	return (0);
}
