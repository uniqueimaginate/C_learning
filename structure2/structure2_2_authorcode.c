#include <stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
} Point;

typedef struct rectangle
{
	Point ul;
	Point lr;
} Rectangle;

void ShowRecArea(Rectangle rec)
{
	printf("area: %d \n",
			(rec.lr.xpos-rec.ul.xpos)*(rec.lr.ypos-rec.ul.ypos));
}

void ShowRecPos(Rectangle rec)
{
	printf("upper left: [%d, %d] \n", rec.ul.xpos, rec.ul.ypos);
	printf("lower left: [%d, %d] \n", rec.ul.xpos, rec.lr.ypos);
	printf("upper right: [%d, %d] \n", rec.lr.xpos, rec.ul.ypos);
	printf("lower right: [%d, %d] \n", rec.lr.xpos, rec.lr.ypos);
}


int main()
{
	Rectangle rec1 = {{1,1},{4,4}};
	Rectangle rec2 = {{0,0},{7,5}};
	ShowRecArea(rec1);
	ShowRecPos(rec1);
	ShowRecArea(rec2);
	ShowRecPos(rec2);
	return 0;
}

