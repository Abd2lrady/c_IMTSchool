#include <stdio.h>

int reverseNo(int num);

void main()
{
	int num, res;
	printf("please enter no: ");
	scanf("%d", &num);
	
	res = reverseNo(num);
	
	printf("your reversed no is: %d",res);
	
}
int reverseNo(int num)
{
	int res = 0;
	char rem;
	while (num != 0)
	{
		// getting the Least significant digit
		rem = num % 10;
		// tossing the ones digit
		num = num / 10;
		// shifing result by ten to free space for the new digit
		res = res * 10;
		// inserting the digit in ones place
		res = res + rem;
	}
	return res;
}