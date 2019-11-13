// myz3_3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>
int main(int argc, char* argv[])
{	double d,p,r,m;
	d=300000;
	p=6000;
	r=0.01;
	m=log(p/(p-d*r))/log(1+r);
	printf("m=%f\n",m);
	return 0;
}

