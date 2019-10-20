// sqk33.cpp : Defines the entry point for the console application.
//
#include<stdio.h>
#include<math.h>
int main(){
	float d=300000,p=6000;
	float r=0.01;
	float m;
	m=log10(p/(p-d*r))/log10(1+r);
	printf("%.1f",m);
	return 0;
}
