void drawY(int height)
{
	// horizontal center of the pattern
	int hCenter = height / 2;
	// vertical center of the pattern
	int vCenter = hCenter;
	// number of columns based on user entered height
	int col_count =  vCenter * 2 + 1;
	// number of rows based on user entered height
	int row_count = height;


	for (int row = 0; row < row_count; row++)
	{
		if (row < height/2)
		{
			for (int col = 0; col < col_count; col++)
			{
				if (col == row || col == col_count - 1 - row)
				{
					printf("*");
				}
				else
                {
                    printf(" ");
				}
			}
		}
		else
        {
            for (int col = 0; col < col_count; col++)
			{
				if (col == vCenter)
				{
					printf("*");
				}
				else
                {
                    printf(" ");
				}
			}
        }

		printf("\n");
	}
}
