#include <stdio.h>

int main()
{
	int num;
	int arr[10];
	int i,j;
	printf("Change to binary number : ");
	scanf("%d", &num);
	for(;num>0;)
	{
		int remain;
		remain = num%2;
		arr[i] = remain;
		i++;
		num = num/2;
	}
	for(j=i-1; j>=0; j--)
	{
		printf("%d", arr[j]);
	}
	return 0;
}
