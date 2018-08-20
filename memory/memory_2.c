#include <stdio.h>
#include <stdlib.h>

int main()
{
	int arrlen = 5;
	int i, idx;
	int * arr = (int *)malloc(sizeof(int)*5);
	
	while(1)
	{
		printf("input number : ");
		scanf("%d", &arr[idx]);
		if(arr[idx] == -1)
		{
			break;
		}
		
		if(arrlen == idx+1)
		{
			arrlen += 3;
			arr = (int *)realloc(arr, sizeof(int)*arrlen);
		}
		
		idx++;
	}
	for(i=0; i<idx; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
