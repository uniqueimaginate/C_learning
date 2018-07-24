#include <stdio.h>

int m_table(int n1, int n2)
{
	if(n1<n2)
	{
		for( ; n1<=n2; n1++)
		{
			int i;
			for(i=0; i<10; i++)
			{
				printf("%d * %d = %d\n", n1, i, n1*i);
			}
			printf("\n");
		}
	}
	else
	{
		for( ; n2<=n1; n2++)
		{
			int i;
			for(i=0; i<10; i++)
			{
				printf("%d * %d = %d\n", n2, i, n2*i);
			}
			printf("\n");
		}
	}
}

int main()
{
	int num1, num2;
	scanf("%d %d", &num1, &num2);
	m_table(num1, num2);
	return 0;
}
