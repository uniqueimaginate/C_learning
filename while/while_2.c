#include <stdio.h>

int main()
{
	int num;
	int i = 0;
	printf("양의 정수를 하나 입력하시오 : ");
	scanf("%d" , &num);
	while ( i < num )
	{
		printf("%d ", 3 * (i+1));
		i++;
	} 
	return 0;
}
