#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	printf("������ ����: 0���� %d���� \n", RAND_MAX);
	for(i=0; i<5; i++)
	{
		printf("���� ���: %d \n", (rand()) % 99);
	}
	return 0;
}
