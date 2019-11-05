// sqk4_8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{	
	int a;
	scanf("%d",&a);
	a=a/10;
	switch(a){
	case 10:
	case 9:
		printf("A\n");
		break;
	case 8:
		printf("B\n");
	case 7:
		printf("C\n");
	case 6:
		printf("D\n");
	default:
		printf("E\n");
	}
	return 0;
}

