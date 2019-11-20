// 6_3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int a[3][3],i,sum=0,j;
	for(i=0;i<=2;i++)
		for(j=0;j<=2;j++){
			scanf("%d",&a[i][j]);
	} 
	for(i=0;i<=2;i++){
		sum=sum+a[i][i];
	}
	printf("%d",sum);
	return 0;
}

