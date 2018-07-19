#include <stdio.h>

void Swap3(int *ptr1, int *ptr2, int *ptr3)
{
	int temp1 = *ptr1;
	int temp2 = *ptr2;
	int temp3 = *ptr3;
	*ptr2 = temp1;
	*ptr3 = temp2;
	*ptr1 = temp3;
	printf("%d %d %d\n", *ptr1, *ptr2, *ptr3);
}
//this solving is not wrong, but you can solve it more simply! think again!

int main()
{
	int num1, num2, num3;
	scanf("%d %d %d", &num1, &num2, &num3);
	Swap3(&num1, &num2, &num3);
	return 0;
}
