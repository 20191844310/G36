// flower.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int m,n,a,b,i,k,sum;
	
	for(i=100000000;i<=999999999;i++){
		sum=0;
		m=i;
		for(k=1;k<=9;k++){
			a=m%10;
			m=m/10;
			sum=sum+a*a*a*a*a*a*a*a*a;
						}
		if(sum==i)
		printf("%d\n",sum);
						}
	return 0;
}

