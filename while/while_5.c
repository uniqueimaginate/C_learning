#include <stdio.h>

int main()
{
	int i = 0, num, num1 = 0 , num2;
	printf("�� ���� ������ �Է��� ���Դϱ�?  ");
	scanf("%d", &num);
	while(i < num)
	{
		printf("���� �Է� : ");
		scanf("%d", &num2);
		num1 = num1 + num2;
		i++;
	}
	printf("�Է��� ��� : %f \n", (double)num1/num);
	return 0;
}
