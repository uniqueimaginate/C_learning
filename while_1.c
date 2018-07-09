#include <stdio.h>

int main()
{
	int num, i;
	printf("숫자 하나를 입력하시오 : ");
	scanf("%d", &num);
	while(i < num)
	{
		printf("hello world!\n");
		i++;
	}
	return 0;
}
