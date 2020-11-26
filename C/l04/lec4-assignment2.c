#include <stdio.h>

void check();
int calc1(char id, int num);
int calc2(char id, int num1, int num2);

    char id;
	int num1, num2, res;

void main()
{

	// getting operation id
	printf("please enter opeation id: ");
	scanf("%d",&id);

	// checking for entered operation id
	check();

	// cal result
	switch (id)
	{
        case 7:
		case 10:
        case 11:
		printf("please enter your operand: ");
		scanf("%d", &num1);
		res = calc1(id, num1);
		break;

		default:
		printf("please enter your frist operand: ");
		scanf("%d", &num1);
		printf("please enter your second operand: ");
		scanf("%d", &num2);
		res = calc2(id, num1, num2);
	}
	printf("your result is: %d", res);
}

// checking entered id
void check()
{
	int try = 2;
	// checking for entered operation id
	while (id < 1 || id > 11 && try >= 0)
	{
		printf("you entered wrong operation id\n");
		printf ("please enter id from 1 to 11\n");
		scanf("%d", &id);
		try--;
	}

	if (try < 0)
	{
		printf("error enterd worng operation id");
	}

	return;
}

// calculator for 1 operand operations
int calc1(char id, int num)
{
	int res;
	switch (id)
	{
		case 7:
		res = not(num);
		break;

		case 10:
		res = inc(num);
		break;

		case 11:
		res = dec(num);
		break;
	}

	return res;
}

// calculator for 2 operands operations
int calc2(char id, int num1, int num2)
{
	int res;
	switch (id)
	{
		case 1:
		res = add(num1, num2);
		break;

		case 2:
		res = sub(num1, num2);
		break;

		case 3:
		res = mul(num1, num2);
		break;

		case 4:
		res = div(num1, num2);
		break;

		case 5:
		res = and(num1, num2);
		break;

		case 6:
		res = or(num1, num2);
		break;

		case 8:
		res = xor(num1, num2);
		break;

		case 9:
		res = rem(num1, num2);
		break;
	}

	return res;
}

int add(int num1, int num2)
{
	return num1 + num2;
}

int sub(int num1, int num2)
{
	return num1 - num2;
}

int mul(int num1, int num2)
{
	return num1 * num2;
}

int div(int num1, int num2)
{
	return num1 / num2;
}

int and(int num1, int num2)
{
	return num1 & num2;
}

int or(int num1, int num2)
{
	return num1 | num2;
}

int not(int num)
{
	return ~num;
}

int xor( int num1, int num2)
{
	return num1 ^ num2;
}

int rem(int num1, int num2)
{
	return num1 % num2;
}

int inc(int num)
{
	return ++num;
}

int dec(int num)
{
	return --num;
}

