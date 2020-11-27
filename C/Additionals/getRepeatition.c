#include <stdio.h>
#include <stdlib.h>

void getRepeatition(int *arr, int arr_count, int *res);
int resArr[10] = {0};
void main()
{
	int arr[30];
	for (int indx = 0; indx < 30; indx++)
	{
		arr[indx] = (rand() % 31);
	}
	
	getRepeatition(arr, 30, resArr);
}

void getRepeatition(int *arr, int arr_count, int *res)
{	
	for (int indx = 0; indx < arr_count; indx++)
	{
		res[arr[indx]]++;
	}
}

void printArr(int *arr, int arr_count)
{
    for (int indx = 0; indx < arr_count; indx++)
    {
        printf("%d\t", arr[indx]);
    }
}