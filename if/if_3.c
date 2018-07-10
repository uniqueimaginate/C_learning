#include <stdio.h>

int main()
{
	int ko, en, ma, average;
	printf("exam score : korean, english, math : ");
	scanf("%d %d %d", &ko, &en, &ma);
	average = (ko + en + ma) / 3; 
	if(average >= 90)
		printf("A");
	else if(average >= 80)
		printf("B");
	else if(average >= 70)
		printf("C");
	else if(average >= 50)
		printf("D");
	else
		printf("F");
	return 0;
}
