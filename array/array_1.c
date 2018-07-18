#include <stdio.h>

int main()
{
	int i, min, max, sum;
	int arr[5];
	for(i=0; i<5; i++)
	{
		scanf("%d", &arr[i]);
	}
	min = arr[0];
	max = arr[0];
	for(i=0; i<5; i++)
	{
		if(min > arr[i])
			min = arr[i];
	}
	for(i=0; i<5; i++)
	{
	
		if(max < arr[i])
			max = arr[i];
	}
	for(i=0; i<5; i++)
	{
		sum += arr[i];
	}
	printf("%d %d %d", min, max, sum);
}
