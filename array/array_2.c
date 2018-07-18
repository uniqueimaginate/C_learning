#include <stdio.h>

int main()
{
	int i;
	char arr[]={"\"Good time\""};
	for(i=0; i<sizeof(arr)/sizeof(char); i++)
	{
		printf("%c", arr[i]);
	}
	return 0;
}
