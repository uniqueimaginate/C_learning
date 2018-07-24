#include <stdio.h>

int odd(int *num)
{
	int j;
	for(j=0; j<10; j++)
	{
		if(*num%2==1)
			printf("%d ", *num);
			num++;
	}
	
}

int even(int *num)
{
	int j;
	for(j=0; j<10; j++)
	{
		if(*num%2==0)
			printf("%d ", *num);
			num++;
	}
	
}
int main()
{
	int arr[10];
	int i; 
	printf("give 10 numbers\n"); 
	for(i=0; i<10; i++)
	{
		printf("ют╥б : ");
		scanf("%d", &arr[i]); 
	}
	printf("even number : ");
	even(arr);
	printf("\nodd number : ");
	odd(arr);
}
