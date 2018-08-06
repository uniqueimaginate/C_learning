#include <stdio.h>
#include <string.h>

int main()
{
	char str1[20];
	char str2[20];
	char str3[40];
	int num;
	printf("input str1 :");
	fgets(str1, sizeof(str1), stdin);
	str1[strlen(str1)-1]=0;


	printf("input str2 :");
	fgets(str2, sizeof(str2), stdin);
	str2[strlen(str2)-1]=0;

	strcpy(str3, str1);
	strcap(str3, str2);
	printf("combination : %s \n", str3);
	return 0;
}

//do this again.
