#include <stdio.h>

int min(int n1, int n2);
int min_n;

int main()
{
	int num1, num2, i, gcd;
	scanf("%d %d", &num1, &num2);
	min(num1, num2);
	for(i=1; i<=min_n; i++)
	{
		if(num1%i==0 && num2%i==0)
			gcd = i;
	}
	printf("%d", gcd);
	return 0;
}


int min(int n1, int n2)
{
	if(n1<n2)
		min_n = n1;
	else
		min_n = n2;
}
