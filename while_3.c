#include <stdio.h>

int main()
{
	int num1, num2;
	while (num2)
	{
		printf("숫자를 입력하시오 : ");
		scanf("%d", &num2);
		num1 = num1 + num2;
	}
	printf("%d", num1);
	return 0;
}
