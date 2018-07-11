//compare three numbers!

#include <stdio.h>

int compare(int num1, int num2, int num3);
	
int main()
{
	int n1, n2, n3;
	printf("give three numbers : ");
	scanf("%d %d %d", &n1, &n2, &n3);
	compare(n1,n2,n3);
}

int compare(int num1, int num2, int num3)
{
	int max;
	int min;
	if(num1<=num2)
	{
		if(num2<=num3)
		{
			max = num3;
			min = num1;
		}
		else
		{
			max = num2;
			if(num3<=num1)
			{
				min = num3;
			}
			else
			{
				min = num1;
			}
		}
	}
	else                        //num1>=num2
	{
		if(num1<=num3)
		{
			max = num3;
			min = num2;
		}
		else
		{
			max = num1;
			if(num3>=num2)
			{
				min = num2;
			}
			else
			{
				min = num3;
			}
		}
	}
	printf("max = %d, min = %d", max, min);
}	

