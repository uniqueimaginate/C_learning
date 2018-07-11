//make pivonacci!
#include <stdio.h>

int pivo(int n1);
int main()
{
	int num;
	scanf("%d", &num);
	pivo(num);
	return 0;
}

int pivo(int n1)
{
	int num1=0, num2=1, num3, i;
	if(n1==1)
		printf("%d", num1);
	if(n1==2)
		printf("%d %d", num1, num2);
	if(n1>=3)
		printf("%d %d ", num1, num2);
		while(1)
		{
			num3 = num1 + num2;
			num1 = num2;
			num2 = num3;
			i++;
			printf("%d ", num3);
			if(i==n1-2)
				break;
		}
}
