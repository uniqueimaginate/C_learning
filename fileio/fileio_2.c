#include <stdio.h>

int main()
{
	FILE * write = fopen("mystory.txt", "at");
	if(write==NULL)
	{
		puts("���Ͽ��� ����");
		return -1;
	}
	
	fputs("#��ܸԴ� ����: «��, ������\n", write);
	fputs("#���: �౸\n", write);
	fclose(write);
	return 0;
}
