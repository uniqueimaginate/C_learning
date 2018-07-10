#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	switch(n/10)
	{
	case 0:
		printf("0 이상 10미만");
		break;
	case 1:
		printf("10 이상 20미만");
		break;
	case 2:
		printf("20 이상 30미만");
		break;
	default:
		printf("30 이상");
	}
}
