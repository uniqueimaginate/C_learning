#include <stdio.h>

int main()
{
	char str[50];
	int idx=0;
	printf("give any word : ");
	scanf("%s", str);
	while(str[idx] != '\0')
	{
		idx++;
	}
	printf("%d", idx);
	return 0;
}
