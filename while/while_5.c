#include <stdio.h>

int main()
{
	int i = 0, num, num1 = 0 , num2;
	printf("몇 개의 정수를 입력할 것입니까?  ");
	scanf("%d", &num);
	while(i < num)
	{
		printf("정수 입력 : ");
		scanf("%d", &num2);
		num1 = num1 + num2;
		i++;
	}
	printf("입력의 평균 : %f \n", (double)num1/num);
	return 0;
}
