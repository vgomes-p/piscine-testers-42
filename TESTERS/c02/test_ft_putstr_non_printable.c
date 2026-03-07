
int main()
{
	char *str1 = "Hello\nHow are you?";
	char *str2 = "Here we have: tab (\t), new line (\n), carriage return (\r), delete (\177)";
	char *str3 = "cancel (\30), escape/ESC (\33), shift out (\16), shift in (\17)...";
	ft_putstr_non_printable(str1);
	ft_putchar('\n');
	ft_putstr_non_printable(str2);
	ft_putchar('\n');
	ft_putstr_non_printable(str3);
	ft_putchar('\n');
	return (0);
}
