#include <stdio.h>

int main()
{
	int i = 1, num;
	printf("let's make n factorial! Give me a number n : ");
	scanf("%d", &num);
	for ( i = num-1 ; i > 1 ; i--)
	{
		num = num*i;
	}
	printf("%d", num);
}
