#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float weight;
	float height;
	float bmi;

	printf("Enter weight(kilogram):");
	scanf_s("%f", &weight);
	printf("Enter height(meter):");
	scanf_s("%f", &height);
	bmi = weight / height / height;
	printf("BMI : %0.2f \n", bmi);
	
	if (bmi > 0 && bmi < 18.5)
	{
		printf("You are underweight\n");
	}
	if (18.5<= bmi && bmi<25)
	{
			printf("You are normal\n");
	}
	if (25<=bmi && bmi <30)
	{
			printf("You are overweight\n");
				}
	if (bmi >= 30.0)
	{
		printf("You are obese\n");
	}
	system("pause");
	return 0;
}
