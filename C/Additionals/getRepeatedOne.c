#include <stdio.h>
#include <stdlib.h>

int getRepeatedBySummation(int *arr, int arr_count);
int getRepeatedByXor(int *arr, int arr_count);
int getMin(int *p_arr, int arrCount);

void main()
{
	int numArr[11] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 7};
	int element;


	element = getRepeatedByXor(numArr, 11);

    printf("repeated Element is %d", element);

}

int getRepeatedBySummation(int *arr, int arr_count)
{
	int arrSum = 0, natSum = 0, element;
	int num_count = arr_count - 1;
	for (int arrIndx = 0; arrIndx < arr_count; arrIndx++)
	{
		arrSum = arrSum + arr[arrIndx];
	}
	natSum = num_count * (num_count - 1) / 2;

	element = arrSum - natSum;
	return element;
}

int getRepeatedByXor(int *arr, int arr_count)
{
    int element = 0;
    int min = getMin(arr, arr_count);
    int max = min + arr_count - 2;

	for (int indx = 0; indx < arr_count - 1; indx++)
	{
		element = element ^ arr[indx] ^ (min + indx) ;
	}
    element = element ^ arr[arr_count - 1] ;

	return element;
}


int getMin(int *p_arr, int arrCount)
{
    // set max to first input element
    int min = p_arr[0];
    // traverse the array elements
    int arrIndx;
    for (arrIndx = 1; arrIndx < arrCount; arrIndx++)
    {
        // checking if the current element is smaller the min
        if (p_arr[arrIndx] < min)
        {
            // update the min with the current smaller element
            min = p_arr[arrIndx];
        }
    }
    // getting the the smallest element
    return min;
}
