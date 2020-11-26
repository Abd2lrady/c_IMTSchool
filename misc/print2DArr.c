void printArr(int *arr, int row, int col)
{
    for (int rowIndx = 0; rowIndx < row; rowIndx++)
    {
        for (int colIndx = 0; colIndx < col; colIndx++)
        {
            cout << *(arr + (rowIndx * col) + colIndx) << " ";
        }
            cout << endl;
    }
}