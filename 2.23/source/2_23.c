#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1;
	int num2;
	int num3;
	printf("Enter the first number:");
	scanf_s("%d", &num1);
	printf("Enter the second number:");
	scanf_s("%d", &num2);
	printf("Enter the third number:");
	scanf_s("%d", &num3);

	if (num1 > num2 && num1 > num3)
	{
		if (num2 > num3)
		{
			printf("Max:%d\n", num1);
			printf("Min:%d\n", num3);
		}
		if (num2 < num3)
		{
			printf("Max:%d\n", num1);
			printf("Min:%d\n", num2);
		}
		if (num2 == num3)
		{
			printf("Max:%d\n", num1);
			printf("Min:%d\n", num2);
		}

	}
		if (num2 > num1 && num2 > num3)
	{
		if (num1 > num3)
		{
			printf("Max:%d\n", num2);
			printf("Min:%d\n", num3);
		}
		if (num1 < num3)
		{
			printf("Max:%d\n", num2);
			printf("Min:%d\n", num1);
		}
		if (num1 == num3)
		{
			printf("Max:%d\n", num2);
			printf("Min:%d\n", num1);
		}
	}
	if (num3 > num1 && num3 > num2)
	{
		if (num1 > num2)
		{
			printf("Max:%d\n", num3);
			printf("Min:%d\n", num2);
		}
		if (num1 < num2)
		{
			printf("Max:%d\n", num3);
			printf("Min:%d\n", num1);
		}
		if (num1 == num2)
		{
			printf("Max:%d\n", num3);
			printf("Min:%d\n", num1);
		}
	}
	if (num1 == num2 && num1>num3)
	{
		printf("Max:%d\n", num1);
		printf("Min:%d\n", num3);
	}
	if (num1 == num3 && num1 > num2)
	{
		printf("Max:%d\n", num1);
		printf("Min:%d\n", num2);
	}
	if (num2 == num3 && num2 > num1)
	{
		printf("Max:%d\n", num2);
		printf("Min:%d\n", num1);
	}
	if (num1 == num2 && num1 == num3)
	{
		printf("Error!\nEnter three different numbers\n");
	}

	system("pause");
	return 0;
}
