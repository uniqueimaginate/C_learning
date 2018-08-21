#include <stdio.h>
#define PI 3.14
#define AREA(X) (PI * (X)*(X))

int main()
{
	double num;
	scanf("%lf", &num);
	printf("area of circle : %lf", AREA(num));
	return 0;
}
