#include <stdio.h>

int main()
{
	int arr[5][5];
	int i, j;
	for(i=0; i<4; i++)
	{
		for(j=0; j<4; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	for(i=0; i<4; i++)
	{
		int score_p = 0;
		for(j=0; j<4; j++)
		{
			score_p += arr[i][j];
			arr[i][4] = score_p;
		}
	}
	for(j=0; j<4; j++)
	{
		int score_s = 0;
		for(i=0; i<4; i++)
		{
			score_s += arr[i][j];
			arr[4][j] = score_s;
		}
	}
	int total = arr[4][0] + arr[4][1] + arr[4][2] + arr[4][3];
	arr[4][4] = total;
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			printf("%3d ", arr[i][j]);
		}
		printf("\n");
	}
}
