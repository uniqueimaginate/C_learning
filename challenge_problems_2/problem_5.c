#include <stdio.h>

void DesSort(int ary[], int len);

int main()
{
	int arr[7];
	int i,j;
	for(j=0; j<7 ; j++)
	{
		printf("input : ");
		scanf("%d", &arr[j]);
	}
	
	DesSort(arr, sizeof(arr)/sizeof(int));
	for(i=0; i<7; i++)
		printf("%d ", arr[i]);
		
	printf("\n");
	return 0;
}

void DesSort(int ary[], int len)
{
	int i,j;
	int temp;
	
	for(i=0; i<len-1; i++)
	{
		for(j=0; j<(len-i)-1; j++)
		{
			if(ary[j] < ary[j+1])
			{
				temp = ary[j];
				ary[j] = ary[j+1];
				ary[j+1] = temp;
			}
		}
	}
}
