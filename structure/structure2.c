#include <stdio.h>

struct employee
{
	char name[20];
	int ID;
	int phone_nu;
};

int main()
{
	struct employee arr[3];
	int i;

	for(i=0; i<3; i++)
	{
		printf("input about person No.%d ", i+1);
		scanf("%s %d %d", arr[i].name, &arr[i].ID, &arr[i].phone_nu);
	}
	for(i=0; i<3; i++)
	{
		printf("%s %d %d\n", arr[i].name, arr[i].ID, arr[i].phone_nu);
	}
	return 0;
}

//structure part is easy. it's almost same as examples
