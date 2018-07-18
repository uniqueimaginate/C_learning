#include <stdio.h>

int main()
{
	char str[50];
	int idx;
	printf("give any words : ");
	scanf("%s", str);
	while(str[idx] != '\0')
	{
		idx++;
	}
	for(idx = idx-1; idx>=0; idx--)
	{
		printf("%c", str[idx]);
	}
	return 0;	
}
