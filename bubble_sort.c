#include <stdio.h>

void printA(int A[], int size){
	for (int m = 0; m <size ; m++)
	{
		printf("%d ", A[m]);
	}
}

int main()
{

	int i, j, l, h, m, temp;

	int arr[8] = {2, 14, 6, 8, 1, 12, 4, 16};
	int n = sizeof(arr)/sizeof(int);
	printA(arr, n);

	// Bubble sorting
	for (i = 0; i < n-1; i++)
	{
		for ( j = 0; j < n-1-i; j++)
		{
			if (arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
		
	}
	printf("\n");
	printA(arr, n);

	return 0;
}