#include <stdio.h>

int main()
{
	char str[50];
	int idx;
	printf("give any words : ");
	scanf("%s", str);
	char max = str[0];
	while(str[idx] != '\0')
	{
		if(str[idx] >= max)
		{
			max = str[idx];
		}
		idx++;
	}
	printf("%c", max);
	return 0;
}
