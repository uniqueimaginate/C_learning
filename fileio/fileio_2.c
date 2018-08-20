#include <stdio.h>

int main()
{
	FILE * write = fopen("mystory.txt", "at");
	if(write==NULL)
	{
		puts("ÆÄÀÏ¿ÀÇÂ ½ÇÆĞ");
		return -1;
	}
	
	fputs("#Áñ°Ü¸Ô´Â À½½Ä: Â«»Í, ÅÁ¼öÀ°\n", write);
	fputs("#Ãë¹Ì: Ãà±¸\n", write);
	fclose(write);
	return 0;
}
