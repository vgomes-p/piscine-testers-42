
int main()
{
	char	*str1 = "This is the first string!";
	char	*strtf1 = "the first string!";
	char	*str2 = "This is the second string!";
	char	*strtf2 = "second str!";
	char	*str3 = "This string is big...";
	char	*strtf3 = "This string is big... really big!";

	char	*ret1 = ft_strstr(str1, strtf1);
	char	*ret2 = ft_strstr(str2, strtf2);
	char	*ret3 = ft_strstr(str3, strtf3);

	if (ret1 != NULL && ret2 == NULL && ret3 == NULL)
	{
		printf("'%s' was found in '%s'. ft_strstr returned: '%s'\n", strtf1, str1, ret1);
		printf("'%s' was not found in '%s'. ft_strstr returned: '%s'\n", strtf2, str2, ret2);
		printf("'%s' was not found in '%s'. ft_strstr returned: '%s'\n", strtf3, str3, ret3);
	}
	else
	{
		printf("looking for '%s' in '%s' should returned 'the first string!', ft_strstr returned: '%s'...\n", strtf1, str1, ret1);
		printf("looking for '%s' in '%s' should returned '(null)', ft_strstr returned: '%s'...\n", strtf2, str2, ret2);
		printf("looking for '%s' in '%s' should returned '(null)', ft_strstr returned: '%s'...\n", strtf3, str3, ret3);
	}
	return (0);
}
