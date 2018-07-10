#include <stdio.h>

int main()
{
	int num;
	for(num=1; num<100; num++)
	{
		num % 7 == 0 || num % 9 == 0 ? printf("%d\n", num) : printf("") ;
	}
	return 0;
}
