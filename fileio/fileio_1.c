#include <stdio.h>

int main()
{
	FILE * write = fopen("mystory.txt", "wt");
	if(write==NULL)
	{
		puts("���Ͽ��� ����");
		return -1;
	}
	
	fputs("#�̸�: ������\n", write);
	fputs("#�ֹι�ȣ: 940712-1111111\n", write);
	fputs("#��ȭ��ȣ: 010-8843-3113\n", write);
	
	fclose(write);
	return 0;
}
