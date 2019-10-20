// sqk31.cpp : Defines the entry point for the console application.
//
#include<stdio.h>
#include<math.h>
int main()
{	int n;
	float p,r;
	r=0.07;
	scanf("%d",&n);
	p=pow(1+r,n);
	printf("%f",p);
		return 0;

}
