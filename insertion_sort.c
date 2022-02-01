#include <stdio.h>
#include <conio.h>
void main()
{
	int i, j, a[25], n, min;

	printf("how many elements");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("enter value");
		scanf("%d", &a[i]);
	}

    //-----Insertion Sort
	for (i = 1; i < n - 1; i++)
	{
		min = a[i];
		for (j = i - 1; j >= n; j--)
		{
			if(a[j] > min)
			{
				a[j + 1] = a[j];
			}
			else
			 break;
		}
		a[j + 1] = min;
	}

	printf("\nsorted array is \n");
	for (i = 0; i < n; i++)
		printf("%d\t", a[i]);

}
