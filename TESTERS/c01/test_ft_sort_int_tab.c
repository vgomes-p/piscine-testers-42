
int main()
{
	int arr[] = {8, 0, 3, 2, 4};
	int original_size = sizeof(arr) / sizeof(arr[0]);
	int size = original_size;

	ft_sort_int_tab(arr, size);

	printf("Organizado:");
	for (int i = 0; i < original_size; i++)
	{
		printf(" %d", arr[i]);
	}
	printf("\n");

	return 0;
}
