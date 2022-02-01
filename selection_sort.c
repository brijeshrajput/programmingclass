#include <stdio.h>
#include <conio.h>
void main()
{
	int i, j, min, a[25], n, pos, t;

	printf("how many elements");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("enter value");
		scanf("%d", &a[i]);
	}

	//------Selection Sort
	for (i = 0; i < n - 1; i++)
	{
		min = a[i];
		pos = i;
		for (j = i + 1; j < n; j++)
		{
			if (a[j] < min)
			{
				min = a[j];
				pos = j;
			}
		}
		t = a[i];
		a[i] = a[pos];
		a[pos] = t;
	}

	printf("\nsorted array is \n");
	for (i = 0; i < n; i++)
		printf("%d\t", a[i]);

}
