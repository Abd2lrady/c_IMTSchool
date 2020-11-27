#include <stdio.h>
const int N = 10;

void main()
{
	int arr[N], max, min;
	int arrIndx;
	for (arrIndx = 0; arrIndx < N; indx++)
	{
		printf("please enter number %d: ", indx);
		scanf("%d", arr[indx]);
	}
	arrIndx = 1;
	max = min = arr[0];
	while (arrIndx < N)
	{
		if (arr[arrIndx] > max)
		{
			max = arr[arrIndx];
		}
		
		if (arr[arrIndx] < min)
		{
			min = arr[arrIndx];
		}
		
		arrIndx++;
	}
}

