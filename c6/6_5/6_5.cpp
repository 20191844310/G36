// 6_5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
		int a[1000];
	int i,n,t;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<=n/2;i++){
		t=a[i];
		a[i]=a[n-i];
		a[n-i]=t;
	}
	for(i=0;i<=n;i++){
	printf("%d ",a[i]);
	}

	return 0;
}

