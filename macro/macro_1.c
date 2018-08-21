#include <stdio.h>
#define ADD(X, Y, Z) ((X) + (Y) + (Z))
#define MUL(X, Y, Z) ((X) * (Y)* (Z))

int main()
{
	int num1, num2, num3;
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("result of add : %d\n", ADD(num1, num2, num3));
	printf("result of multiplication : %d\n", MUL(num1, num2, num3));
	return 0;
}
