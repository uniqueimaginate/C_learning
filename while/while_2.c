#include <stdio.h>

int main()
{
	int num;
	int i = 0;
	printf("���� ������ �ϳ� �Է��Ͻÿ� : ");
	scanf("%d" , &num);
	while ( i < num )
	{
		printf("%d ", 3 * (i+1));
		i++;
	} 
	return 0;
}
