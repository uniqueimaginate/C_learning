#include <stdio.h>

struct employee
{
	 char name[20];
     char ID[20];
     int s_info;
} peter;

int main()
{
	printf("input name : ");
	scanf("%s", peter.name);

	printf("input ID : ");
	scanf("%s", peter.ID);

	printf("input salary information : ");
	scanf("%d", &(peter.s_info));

	printf("name : %s \n", peter.name);
	printf("ID : %s \n", peter.ID);
	printf("salary information : %d \n", peter.s_info);

	return 0;
}


//this problem was easy one.
