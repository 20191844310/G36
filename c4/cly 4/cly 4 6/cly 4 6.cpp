// cly 4 6.cpp : Defines the entry point for the console application.
//

#include <stdio.h>

int main()
{
	int x,y;
	scanf("%d",&x);
	if(x<1)
		y=x;
	else
		if(1<=x<10)
			y=2*x-1;
		else
			y=3*x-11;
		printf("x=%d,y=%d",x,y);

	return 0;
}

