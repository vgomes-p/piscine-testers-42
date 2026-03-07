
int main()
{
	char o_str[] = "hello, 42 global! hello, world, hello, solar system! hello, milky way!";
	char o_str1[] = "hi, how are you? 42words forty-two; fifty+and+one";

	printf("Original string: %s \n", o_str);
	printf("Capitalized string: %s \n\n", ft_strcapitalize(o_str));
	printf("Original string: %s \n", o_str1);
	printf("Capitalized string: %s \n", ft_strcapitalize(o_str1));
	return (0);
}
