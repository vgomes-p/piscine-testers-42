
int	main(void)
{
	char src[] = "Hello, 42 Global! Hello, World, Hello, Solar System! Hello, Milky way!";
	int i = 0;
	while (src[i] != '\0')
	    i++;
	char dest[i];

	ft_strcpy(dest, src);

	printf("Original: %s\n", src);
	printf("Copied: %s\n", dest);
	return (0);
}
