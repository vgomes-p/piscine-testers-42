
int	main()
{
	char			*src = "Hello, 42 Global! Hello, World, Hello, Solar System! Hello, Milky Way!";
	char			dest[18];
	unsigned int	ret;

	printf("Original string: %s\n", src);

	ret = ft_strlcpy(dest, src, sizeof(dest));

	printf("String after strlcpy: %s\n", dest);
	printf("Size needed to copy the string '%s': %u\n", src, ret);

	if (dest[sizeof(dest) - 1] == '\0')
		printf("Dest is properly null-terminated.\n");
	else
		printf("Dest is NOT properly null-terminated.\n");

	return (0);
}
