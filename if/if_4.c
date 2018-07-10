#include <stdio.h>

int main()
{
	int i, num;
	for(i=1; i<10; i++)
	{
		if(i%2==1)
			continue;
			for(num=1; num<=i ;num++)
			{
				printf("%d * %d = %d\n", i, num, i*num);
			}
			printf("************\n");
	}
	return 0;
}
