#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

int main01()
{
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	int len = sizeof(arr) / sizeof(int);
	for (int i = 0; i < len/2; i++)
	{
		int temp = arr[i];
		arr[i] = arr[len - i - 1];
		arr[len - i - 1] = temp;
	}
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}

	return EXIT_SUCCESS;
}

int main()
{
	char arr1[12] = { 0 };
	char arr2[12] = { 0 };
	scanf("%s", arr1);
	scanf("%s", arr2);
	printf("%s %s\n", arr1, arr2);
	printf("%d %d\n", strlen(arr1), strlen(arr2));
	fputs(arr1, stdout);
	putchar('\n');
	fputs(arr2, stdout);
	putchar('\n');
	srand(time(NULL));
	printf("%d\n", rand());
}