// zph44.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int a,b,c,d;
	int max;
	scanf("%d",&a);
	scanf("%d",&b);	
	scanf("%d",&c);
	a>b?(d=a):(d=b);
	d>c?(max=d):(max=c);

	printf("max=%d\n",max);

	return 0;
}

