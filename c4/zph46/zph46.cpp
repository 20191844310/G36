// zph46.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	float x,y;
	
	scanf("%f",&x);
	if(x<1){
		y=x;
	}
	if(x>=10){
		y=3*x-11;
	}
	else{
		y=2*x-1;
	}
	printf("%f\n",y);
	return 0;
}

