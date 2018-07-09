#include <stdio.h>

int main()
{
	int num, total;
	printf("Give integer(0 to quit): ");
	scanf("%d", &num);
	total+=num;
	while(num!=0)
	{
		printf("Give integer(0 to quit): ");
		scanf("%d", &num);
		total+=num;
	}
	printf("รัวี : %d ", total);	
}
