#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	switch(n/10)
	{
	case 0:
		printf("0 �̻� 10�̸�");
		break;
	case 1:
		printf("10 �̻� 20�̸�");
		break;
	case 2:
		printf("20 �̻� 30�̸�");
		break;
	default:
		printf("30 �̻�");
	}
}
