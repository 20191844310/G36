// prime01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
int m,n;
	int flag=1;
	printf("scan a munber:");
	scanf("%d",&m);
	for(n=1;n<=m/2;n++){
		if(m%n==0){ 
			flag=0;
			break;
				}	 
					 }
	if(flag==1)
	printf("%d is a prime\n",m);
	if(flag==0)
	printf("%d is not a prime\n",m);
	return 0;
}

