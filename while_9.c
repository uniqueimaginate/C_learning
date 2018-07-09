#include <stdio.h>

int main()
{
	int i=0, total=0;
	printf("0이상 100이하의 정수 중에서 짝수의 합을 출력하는 프로그램: ");
	do
	{
		total+=i;
		i=i+2;
	}while(i<=100);
	printf("%d", total);
	return 0;
}
