
int	main(void)
{
	char src[] = "Hello, 42 Global! Hello, World, Hello, Solar System! Hello, Milky way!";
	unsigned int n = 17;
	char dest[n + 1];

	ft_strncpy(dest, src, n);

	printf("Original: %s\n", src);
	printf("Copied: %s\n", dest);

	return (0);
}
