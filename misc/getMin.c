
int getMin(int *p_arr, int arrCount)
{
    // set max to first input element
    int min = p_arr[0];
    // traverse the array elements
    for (int arrIndx = 1; arrIndx < arrCount; arrIndx++)
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
