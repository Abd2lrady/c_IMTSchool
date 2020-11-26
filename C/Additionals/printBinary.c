#include <stdio.h>

void printBinary(int num, int count);
void main()
{
	int num, count;
	printf("Please enter no: ");
	scanf("%d", &num);
	printf("Please enter no of bits you want represent: ");
	scanf("%d", &count);
	representBinary(num, count);
}
void representBinary(int num, int count)
{
	for (int i = 1; i < count; i++)
	{
		printf("%d",1ul & (num >> count-1-i));
	}
}