int getMax(int *p_arr, int arrCount)
{
    // set max to first input element
    int max = p_arr[0];
    // traverse the array elements
    for (int arrIndx = 1; arrIndx < arrCount; arrIndx++)
    {
        // checking if the current element is bigger the max
        if (p_arr[arrIndx] > max)
        {
            // update the max with the current bigger element
            max = p_arr[arrIndx];
        }
    }
    // getting the biggest element
    return max;
}