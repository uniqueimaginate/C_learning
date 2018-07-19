#include <stdio.h>

void SquareByValue(int n1)
{
	n1 = n1 * n1;
	printf("num square : %d\n", n1);
}

int main()
{
	int num;
	scanf("%d", &num);
	SquareByValue(num);
	return 0;
}
