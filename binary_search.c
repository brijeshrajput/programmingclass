#include <stdio.h>

int main()
{

	int i, l, h, m, search;

	search = 16;

	int arr[8] = {2, 4, 6, 8, 10, 12, 14, 16};
	l = 0;
	h = 8 - 1;

	while (l <= h)
	{

		m = (l + h) / 2;
		if (arr[m] == search)
		{
			printf("element is on %d", m+1);
			break;
		}
		else if (arr[m] > search)
		{
			h = m - 1;
		}
		else if (arr[m] < search)
		{
			l = m + 1;
		}
	}
}