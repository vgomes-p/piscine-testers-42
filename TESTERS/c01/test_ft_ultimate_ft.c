
int main()
{
	int n0 = 24;
	int *n1 = &n0;
	int **n2 = &n1;
	int ***n3 = &n2;
	int ****n4 = &n3;
	int *****n5 = &n4;
	int ******n6 = &n5;
	int *******n7 = &n6;
	int ********n8 = &n7;

	ft_ultimate_ft(&n8);
	printf("%d", n0);
}
