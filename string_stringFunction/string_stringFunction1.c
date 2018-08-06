#include <stdio.h>

int main()
{
	int ch;
	while(1)
	{
		printf("put what you want: ");
		ch = getchar();
		if(ch>64 && ch<123)
		{
			if(ch>96)
			{
				ch-=32;
				putchar(ch);
				break;
			}
			else
			{
				ch+=32;
				putchar(ch);
				break;
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}




// 64...123
//
// 32

