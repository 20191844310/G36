// sqk37.cpp : Defines the entry point for the console application.
//
#include<stdio.h>
#define pai 3.14


int main(int argc, char* argv[])
{	int h;
	float r;
	float d,s1,s2,v1,v2;
	scanf("%d",&h);
	scanf("%f",&r);
	d=2*pai*r;
	s1=pai*r*r;
	s2=4*pai*r*r;
	v1=4.0/3.0*pai*r*r*r;
	v2=s1*h;
	printf("圆的周长=%.2f\n",d);
	printf("圆的面积=%.2f\n",s1);
	printf("圆球表面积=%.2f\n",s2);
	printf("圆球体积=%.2f\n",v1);
	printf("圆柱体积=%.2f\n",v2); 
	
	return 0;
}
