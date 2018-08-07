#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int i, a, b;
	srand((int)time(NULL));
	while(1)
	{
		a = rand()%6;
		b = rand()%6;
		if(a!=0 && b!=0)
			break;
	}
	printf("주사위 1의 결과 : %d\n주사위 2의 결과 : %d \n", a, b);
	return 0; 
}
