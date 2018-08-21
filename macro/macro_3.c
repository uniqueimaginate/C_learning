#include <stdio.h>
#define MAX(x,y) ( (x) > (y) ? (x) : (y) )

int main()
{
	double num1, num2;
	printf("input number : ");
	scanf("%lf %lf", &num1, &num2);
	printf("bigger number : %lf", MAX(num1, num2));
	return 0;
}
