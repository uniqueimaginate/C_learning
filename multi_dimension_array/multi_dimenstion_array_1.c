#include <stdio.h>

int main()
{
	int arr[3][9];
	int i,j;
	for(i=0; i<3; i++)
	{
		for(j=0; j<9; j++)
		{
			arr[i][j] = (i+2)*(j+1);
			printf("%3d", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
