// myz3_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>
int main(int argc, char* argv[])
{	double r,n;
	r=0.07;
	n=10; 
	double p =pow(1+r,n);
	printf("p=%f\n",p);
	return 0;
}

