#include <stdio.h>

int main()
{
	int i;
	char str[50];
	FILE * read = fopen("mystory.txt", "rt");
	if(read==NULL)
	{
		puts("파일오픈 실패");
		return -1;
	}
	
	for(i=0; i<5; i++)
	{
		fgets(str, sizeof(str), read);
		printf("%s", str);
	}
	
	fclose(read);
	return 0;
}
