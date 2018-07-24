#include <stdio.h>

void palindrome(char *str);
int stringlen(char *str);

int main()
{
	char str[50];
	printf("문자열 입력 : ");
	scanf("%s", &str);
	palindrome(str); 
	return 0;
}

void palindrome(char *str)
{
	int len = stringlen(str);
	int i;
	
	for(i=0; i<len/2; i++)
	{
		if(str[i] != str[len-i-1])
		{
		
			printf("회문이 아닙니다");
			return;
		}
	}
	printf("회문입니다");
}


int stringlen(char *str)
{
	int len = 0;
	
	while(str[len] != 0)
		len++;
		
	return len;
}

//at first try, i coudn't solve this one.
