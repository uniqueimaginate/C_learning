#include <stdio.h>

void SquareByReference(int *n1)
{
	*n1 = (*n1) * (*n1);
	printf("num square : %d\n", *n1);
}

int main()
{
	int num;
	scanf("%d", &num);
	SquareByReference(&num);
	return 0;
}
