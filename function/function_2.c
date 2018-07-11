#include <stdio.h>

double CeltoFah(double c);
double FahtoCel(double f);
int main()
{
	int num1;
	double num2;
	printf("1. Celsius to Fahrenheit\n");
	printf("2. Fahrenheit to Celsius\n");
	printf("What's your selection? : ");
	scanf("%d", &num1);s
	
	
	if(num1==1)
	{
		printf("Put a temperature : ");
		scanf("%lf", &num2);
		printf("%f", CeltoFah(num2));
	}
	else if(num1==2)
	{
		printf("Put a temperature : ");
		scanf("%lf", &num2);
		printf("%f", FahtoCel(num2));
	}
	else
		printf("wrong input\n");
	return 0;
}

double CeltoFah(double c)
{
	return 1.8*c+32;
	
}

double FahtoCel(double f)
{
	return (f-32)/1.8;

}
