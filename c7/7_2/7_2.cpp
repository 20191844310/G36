// 7_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<math.h>
void jie(int a,int b,int c)
{	double m,x1,x2;
	m=(b*b-4.0*a*c);
	if(m>0){
		x1=(-b+sqrt(m))/2.0*a;
		x2=(-b-sqrt(m))/2.0*a;
		printf("%lf %lf",x1,x2);
		
	}
	if(m==0)
		x1=x2=-b/2*a;
		printf("%lf %lf",x1,x2);
	if(m<0)
		printf("no!");

}
int main(int argc, char* argv[])
{		int x,y,z;
		scanf("%d%d%d",&x,&y,&z);
		jie(x,y,z);



	return 0;
}

