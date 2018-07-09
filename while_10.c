#include <stdio.h>

int main()
{
	int cur=2;
	int is=0;
	do
	{
		do
		{
			printf("%d * %d = %d\n", cur, is, cur*is);
			is++;
		}while(is<10);
		cur++;
		is=0;
		printf("**************\n");
	}while(cur<10);
}
