// 5 3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int m,n,x,d,i,s,b,j;

	scanf("%d",&m);
	scanf("%d",&n);

	s=(m<n)? m:n;
	b=(m>n)? m:n;

	for(i=s;i>0;i--){
		if(m%i==0 && n%i==0){
			d=i;
			break;
		
		}
	
	}

	for(j=b;;j++){
		if(j%m==0 && j%n==0){
			x=j;
			break;
		}
	
	}

	printf("最大公约数是%d\n",d);
	printf("最小公倍数是%d\n",x);
	return 0;
}

