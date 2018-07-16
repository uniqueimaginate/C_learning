#include <stdio.h>

int power(int num1);

int main()
{
	int num;
	scanf("%d", &num);
	printf("%d", power(num));
	return 0;
}

int power(int num1)
{
	if(num1==0)
		return 1;
	else if(num1==1)
		return 2;
	else
		return 2 * power(num1-1);
}
