
int main()
{
	char str1[70] = "Hello, 42 Global! Hello, World, ";
	printf("First string: '%s'\n", str1);
	char *str2 = "Hello, Solar System! Hello, Milky way!";
	printf("Second string: '%s'\n", str2);
	char *dest = ft_strcat(str1, str2);
	printf("Strings cat: '%s'\n", dest);
	return (0);
}
