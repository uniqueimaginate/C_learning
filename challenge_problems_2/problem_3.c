#include <stdio.h>

int main()
{
	int arr[10];
	int i, l;
	int j = 9;
	int k = 0;
	int num;
	printf("총 10개의 숫자 입력\n");
	for(i=0; i<10; i++)
	{
		printf("숫자 입력 : ");
		scanf("%d", &num);
		if(num % 2 == 0)
		{
			arr[j] = num;
			j--;
		}
		else
		{
			arr[k] = num;
			k++;
		}
	}
	printf("배열 요소의 출력 : ");
	for(l=0 ; l<10; l++)
	{
		printf("%d ", arr[l]);
	} 
}

// i didn't use pointer in this problem so when you try again i would recommend to solve it while using pointer
