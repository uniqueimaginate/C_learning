#include <stdio.h>

int hours(int n1);
int minutes(int n2);
int second(int n3);

int main()
{
	int seconds;
	scanf("%d", &seconds);
	printf("hours : %d\n", hours(seconds));
	printf("minutes : %d\n", minutes(seconds));
	printf("seconds : %d\n", second(seconds));
}

int hours(int n1)
{
	return n1/3600;
}

int minutes(int n2)
{
	return (n2%3600)/60;
}

int second(int n3)
{
	return n3%60;
}
