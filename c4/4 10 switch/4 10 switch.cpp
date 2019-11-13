// 4 10 switch.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int I,i;
	double l1,l2,l4,l6,l10,l;

	scanf("%d",&I);

	l1=100000*0.1; 
	l2=l1+100000*0.075; 
	l4=l2+200000*0.05; 
	l6=l4+200000*0.03; 
	l10=l6+400000*0.015;

	i=I/100000;
	if (i>10)  
		i=10; 
	switch(i)
	{
		case 0:l=i*0.1;break;
		case 1:l=l1+(i-100000)*0.075;break;
		case 2:
		case 3:l=l2+(i-200000)*0.05;break;
		case 4:
		case 5:l=l4+(i-400000)*0.03;break; 
		case 6:
		case 7:
		case 8:
		case 9:l=l6+(i-600000)*0.015;break; 
		case 10:l=l10+(i-1000000)*0.01; break; 
	}

	printf("%f\n",l);
	return 0;
}

