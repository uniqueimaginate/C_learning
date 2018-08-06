//This problem was very tough. i coudln't solve it.
//every code i made is not mine. i copied from the book.
//let's review!

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int GetspaceIdx(char str[])
{
	int len, i;
	len = strlen(str);
	for(i=0; i<len; i++)
	{
		if(str[i]==' ')
			return i;
	}
	return -1;
}
	

int CompareName(char str1[], char str2[])
{
	int idx1 = GetspaceIdx(str1);
	int idx2 = GetspaceIdx(str2);

	if(idx1 != idx2)
		return 0;
	else
		return !strncmp(str1, str2, idx1);
}

int CompareAge(char str1[], char str2[])
{
	int idx1=GetspaceIdx(str1);
	int idx2=GetspaceIdx(str2);
	int ag1, ag2;

	ag1 = atoi(&str1[idx1+1]);
	ag2 = atoi(&str2[idx2+1]);

	if(ag1==ag2)
		return 1;
	else
		return 0;
}



int main()
{
	char str1[20];
	char str2[20];

	printf("input 1st person ID: ");
	fgets(str1, sizeof(str1), stdin);
	str1[strlen(str1)-1]=0;

	printf("input 2nd person ID: ");
	fgets(str2, sizeof(str2), stdin);
	str2[strlen(str2)-1]=0;

	if(CompareName(str1,str2))
		puts("same name.");
	else
		puts("different name.");

	if(CompareAge(str1,str2))
		puts("same age.");
	else
		puts("different age.");

	return 0;
}

