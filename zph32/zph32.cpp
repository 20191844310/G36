// zph32.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>
int main(int argc, char* argv[])
{float p,p1,p2,p3,p4,p5,r1,r2,r3,r5,r6;
p=1000;
r1=0.015;
r2=0.021;
r3=0.0275;
r5=0.03;
r6=0.0035;
p1=p*(1+r5*5);
p2=p*(1+r2*2)*(1+r3*3);
p3=p*(1+r3*3)*(1+r2*2);
p4=p*pow(1+r1,5);
p5=p*(1+r6/4,5*4);
printf("p1=%f\n",p1);
printf("p2=%f\n",p2);
printf("p3=%f\n",p3);
printf("p4=%f\n",p4);
printf("p5=%f\n",p5);
	return 0;
}

