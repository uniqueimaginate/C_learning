#include <stdio.h>

int main()
{
	int arr[5] = {1,2,3,4,5};
	int *ptr=&arr[4];
	int i, total;
	for(i=4; i>=0; i--)
	{
		total = total + *ptr;
		ptr--;
	}
	printf("total : %d", total );
	return 0;
}
