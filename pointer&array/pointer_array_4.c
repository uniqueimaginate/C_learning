#include <stdio.h>

int main()
{
	int arr[6] = {1,2,3,4,5,6};
	int *ptr_f = &arr[0];
	int *ptr_b = &arr[5];
	
	int i;
	
	
	for(i=0; i<6; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

//i couldn't solve this problem at first. 
