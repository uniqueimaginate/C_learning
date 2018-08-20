#include <stdio.h>

int main()
{
	FILE * write = fopen("mystory.txt", "wt");
	if(write==NULL)
	{
		puts("파일오픈 실패");
		return -1;
	}
	
	fputs("#이름: 윤성우\n", write);
	fputs("#주민번호: 940712-1111111\n", write);
	fputs("#전화번호: 010-8843-3113\n", write);
	
	fclose(write);
	return 0;
}
