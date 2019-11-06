// myz4_6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int x,y;
	printf("«Î ‰»Îxµƒ÷µ£∫");
	scanf("%d",&x);
	if (x<1)
		printf("y=%d\n",x);
	if (x>=10)
		printf("y=%d\n",3*x-11);
	else
		printf("y=%d\n",2*x-1);
		
	
	return 0;
}

