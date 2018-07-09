#include <stdio.h>

int main()
{
	int i, num;
	while(i < 5)
	{
		while( num < i)
		{
			printf("o ");
			num++;
		}
		num=0;
		printf("*\n");
		i++;
	}
	return 0;
}

