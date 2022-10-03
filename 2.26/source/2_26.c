#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1;
	int num2;
	printf("Enter first number:");
	scanf_s("%d",&num1);
	printf("Enter second number:");
	scanf_s("%d", &num2);
	if (num1 % num2 == 0)
	{
		printf("%d is a multiple of %d\n",num1,num2);
	}
	else
	{
		printf("%d is not a multiple of %d \n",num1,num2);
	}
	

	system("pause");
	return 0;
}
