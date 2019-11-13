// 4 10 if.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int I;
	float l;

	scanf("%d",&I);

	if (I<=100000){
		l=I*0.1;
	}
	else if (I<=200000){
		l=100000*0.1+(I-100000)*0.075;
	}
	else if (I<=400000){
		l=100000*0.1+100000*0.075+(I-200000)*0.05;
	}
	else if (I<=600000){
		l=100000*0.1+100000*0.075+200000*0.05+(I-400000)*0.03;
	}
	else if (I<=1000000){
		l=100000*0.1+100000*0.075+200000*0.05+200000*0.03+(I-600000)*0.015;
	}
	else  {
		l=100000*0.1+100000*0.075+200000*0.05+200000*0.03+400000*0.015+(I-1000000)*0.01;
	}

	printf("%f/n",l);
	return 0;
}

