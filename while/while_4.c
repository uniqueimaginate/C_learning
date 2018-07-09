#include <stdio.h>

int main()
{
	int num;
	int i = 10;
	printf("¸î ´Ü? : ");
	scanf("%d", &num);
	while(i>0)
	{
		printf("%d * %d = %d\n", num, i, num * i);
		i--;
	}
	return 0;
}
