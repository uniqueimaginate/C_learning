#include <stdio.h>

int main()
{
	int i=0, total=0;
	printf("0�̻� 100������ ���� �߿��� ¦���� ���� ����ϴ� ���α׷�: ");
	do
	{
		total+=i;
		i=i+2;
	}while(i<=100);
	printf("%d", total);
	return 0;
}
