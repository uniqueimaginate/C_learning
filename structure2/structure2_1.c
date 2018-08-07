#include <stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
} Point;

void  SwapPoint(Point *pos1, Point *pos2)
{
	Point temp = *pos1;
	*pos1 = *pos2;
	*pos2 = temp;
}

int main()
{
	Point pos1 = {2,4};
	Point pos2 = {5,7};
	SwapPoint(&pos1, &pos2);
	printf("pos1 = {%d, %d}\n", pos1.xpos, pos1.ypos);
	printf("pos2 = {%d, %d}\n", pos2.xpos, pos2.ypos);
	return 0;
}

//when pointer came out i start to be afraid.
//actually this problem was not difficult. it was easy.
//but i could'nt solve.
//i must study pointer again.
