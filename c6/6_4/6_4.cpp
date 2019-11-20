// 6_4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
int i,t,a[12],m;
	for(i=1;i<=11;i++){
		a[i]=i;
	}
	scanf("%d",&t);
	for(i=1;i<=11;i++){
		if(t<a[i]){
			m=a[i];
			a[i]=t;
			t=m;
		}
	}
	for(i=1;i<=11;i++){
		if(a[i]!=0)
		printf("%d ",a[i]);
	}
	return 0;
}

