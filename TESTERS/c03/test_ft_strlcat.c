
#include <string.h>

int	main()
{
	char buf1[10] = "abc";
	int ret1 = ft_strlcat(buf1, "def", 10);
	char buf2[5] = "abcd";
	int ret2 = ft_strlcat(buf2, "XYZ", 5);
	char buf3[5] = "abcd";
	int ret3 = ft_strlcat(buf3, "XYZ", 3);
	if ((ret1 == 6 && strcmp(buf1, "abcdef") == 0)
		&& (ret2 == 7 && strcmp(buf2, "abcd") == 0)
		&& (ret3 == 6 && strcmp(buf3, "abcd") == 0))
	{
		printf("test1: %s | return: %d\n", buf1, ret1);
		printf("test2: %s | return: %d\n", buf2, ret2);
		printf("test3: %s | return: %d\n", buf3, ret3);
	}
	else
	{
		printf("test1 should result 'abcdef' and resulted: '%s'\nreturn 1 should return '6' and returned: '%d'\n\n", buf1, ret1);
		printf("test2 should result 'abcd' and resulted: '%s'\nreturn 2 should return '7' and returned: '%d'\n\n", buf2, ret2);
		printf("test3 should result 'abcdef' and resulted: '%s'\nreturn 3 should return '6' and returned: '%d'\n", buf3, ret3);
	}
	return (0);
}
