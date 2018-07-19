#include <stdio.h>

int main()
{
	int i;
	int arr[5]={1,2,3,4,5};
	int *ptr = &arr[0];
	for(i=0; i<5; i++)
	{
		*ptr+=2;
		ptr++;
	}
	for(i=0; i<5; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

//Keep in mind the difference between problem no.1 and no.2 
