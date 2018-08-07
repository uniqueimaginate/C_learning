#include <stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
} Point;

typedef struct rectangle
{
	Point ul;
	Point dr;
} Rectangle;

int cal(Point *ul, Point *dr)
{
	int result;
	result = (dr->xpos - ul->xpos)*(dr->ypos-ul->xpos);
	return result;
}

int main()
{
	Point po1, po2;
	printf("give a position to po1 : ");
	scanf("%d %d", &po1.xpos, &po1.ypos);
	printf("give a position to po2 : ");
	scanf("%d %d", &po2.xpos, &po2.ypos);
	printf("%d",cal(&po1, &po2));
	

	return 0;
}

// my code is a bit different from the author's code
// but still it works well and the code is not bad
