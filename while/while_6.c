//give 5 integers and make the sum of them. each integer should be bigger than 1. use while twice

#include <stdio.h>

int main()
{
	int num, i, sum;
	while(i < 5)
	{
		while(num<=0)
		{
			printf("0���� ū ���� �Է�(%d��°): ", i+1);
			scanf("%d", &num);
		}
		sum+=num;
		num=0;
		i++;
	}
	printf(" �� �� : %d \n", sum);
	return 0;
}
