#include <stdio.h>

int main()
{
	int num, i, k=0;
	scanf("%d", &num);
	for(i=1; i*2<=num;)
	{
		i = i * 2;
		k++;
	}
	printf("%d", k);
	return 0;
}
