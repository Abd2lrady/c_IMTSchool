#include <stdio.h>
int findMin(int num1, int num2, int num3, int num4);
int findMax(int num1, int num2, int num3, int num4);


void main()
{
	int num1, num2, num3, num4, max, min;
	printf("this will get you max and min of your entered 4 numbers\n");
	// getting num1
	printf("please enter number1: ");
	scanf("%d",&num1);
	// getting num2	
	printf("please enter number2: ");
	scanf("%d",&num2);
	// getting num3
	printf("please enter number3: ");
	scanf("%d",&num3);
	// getting num4
	printf("please enter number4: ");
	scanf("%d",&num4);
	// getting min and max of entered numbers
	min = findMin(num1, num2, num3, num4);
	max = findMax(num1, num2, num3, num4);
	// printing results
	printf("Your max number is: %d\n", max);
	printf("Your min number is: %d\n", min);

}



int findMin(int num1, int num2, int num3, int num4)
{
	int res = num1;
	if (num2 < res)
	{
		res = num2;
	}
	
	if (num3 < res)
	{
		res = num4;
	}
	
	if (num4 < res)
	{
		res = num4;
	}
	
	return res;
}

int findMax(int num1, int num2, int num3, int num4)
{
	int res = num1;
	if (num2 > res)
	{
		res = num2;
	}
	
	if (num3 > res)
	{
		res = num4;
	}
	
	if (num4 > res)
	{
		res = num4;
	}
	
	return res;
}