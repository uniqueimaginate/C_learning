#include <stdio.h>

int main()
{
	int arr[10];
	int i, l;
	int j = 9;
	int k = 0;
	int num;
	printf("�� 10���� ���� �Է�\n");
	for(i=0; i<10; i++)
	{
		printf("���� �Է� : ");
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
	printf("�迭 ����� ��� : ");
	for(l=0 ; l<10; l++)
	{
		printf("%d ", arr[l]);
	} 
}

// i didn't use pointer in this problem so when you try again i would recommend to solve it while using pointer
