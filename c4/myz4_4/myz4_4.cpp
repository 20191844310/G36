// myz4_4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int	a,b,c;
	printf("����������������");
	scanf("%d,%d,%d",&a,&b,&c);
	if (a<b)
		if (b<c)
			printf("max=%d\n",c);
		else
			printf("max=%d\n",b);
	else
		if (a<c)
			printf("max=%d\n",c);
		else
			printf("max=%d\n",a);
	return 0;
}

