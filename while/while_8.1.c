#include <stdio.h>

int main()
{
	int num = 1, total = 0;
	while(num!=0)
	{
		printf("Give integer(0 to quit): ");
		scanf("%d", &num);
		total+=num;
	}
	printf("รัวี : %d ", total);	
}
