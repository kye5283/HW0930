#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i,j,k;
	printf("number	square	cube\n");
	for (i = 0; i <= 10; i++)
	{
		j = i * i;
		k = i * i * i;
		printf("%d	%d	%d\n", i, j, k);
	}

	system("pause");
	return 0;
}
