int linSearchArr(int *arr, int arr_count, int value)
{
	int valueIndx = -1;
	for (int indx = arr_count - 1; indx >= 0; indx--)
	{
		if (arr[indx] == value)
		{
			valueIndx = indx;
			break;
		}
	}
	return valueIndx;
}