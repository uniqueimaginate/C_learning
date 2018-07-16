#include <stdio.h>

const int bread=500;
const int shrimp=700;
const int coke=400;

int main()
{
	int i, j, k;
	for(i=0; i<=1900/bread; i++)
	{
		for(j=0; j<=1900/shrimp; j++)
		{
			for(k=0; k<=1900/coke; k++)
			{
				if(bread*i + shrimp*j + coke*k == 1900)
					printf("bread : %d, shrimp : %d, coke : %d\n", i+1, j+1, k+1);
			}
		}
	}
}
