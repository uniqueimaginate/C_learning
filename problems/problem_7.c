#include <stdio.h>

int main()
{
	int num, i, k;
	scanf("%d", &num);
	for(i=1; i*2<=num; i++)
	{
		i = i;
		k++;
	}
	printf("%d", k);
	return 0;
}
