#include <stdio.h>
int num1, num2;
void swapXor(void);
void swapAddSub(void);
void main()
{

	printf("please enter num1: ");
	scanf("%d", &num1);
	printf("please enter num2: ");
	scanf("%d", &num2);

	printf("%d\t%d are original numbers\n", num1, num2);
	swapXor();
	printf("%d\t%d are swaped\n", num1, num2);
	swapAddSub();
	printf("%d\t%d are swaped again\n", num1, num2);

}

void swapXor(void)
{
	num1 = num1 ^ num2;
	num2 = num2 ^ num1;
	num1 = num1 ^ num2;
}

void swapAddSub(void)
{
	num1 = num1 + num2;
	num2 = num1 - num2;
	num1 = num1 - num2;
}
