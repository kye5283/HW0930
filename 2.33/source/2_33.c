#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float totalmiles;
	float gasoline;
	float milespergallon;
	float parkingfees;
	float perday;

	printf("Enter Total miles driven per day:");
	scanf_s("%f", &totalmiles);
	printf("Enter cost per gallon of gasoline:");
	scanf_s("%f", &gasoline);
	printf("Enter average miles per gallon:");
	scanf_s("%f", &milespergallon);
	printf("Enter parking fees per day:");
	scanf_s("%f", &parkingfees);
	perday = totalmiles + gasoline * milespergallon + parkingfees;
	printf("Tolls per day: %.2f", perday);
	system("pause");
	return 0;
}
