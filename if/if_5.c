#include <stdio.h>

int main()
{
	int A=0, Z=0, sum;
	for(A=0 ; A<10; A++)
	{
		for(Z=0 ; Z<10; Z++)
		{
			if(A + Z == 9)
				printf("(%d, %d)\n", A, Z);
		}
	}
	return 0;
}
