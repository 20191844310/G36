// prime02.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
int m,n,i,x;
	int count=0;
	scanf("%d",&m);
	for(n=2;n<=m;n++){
		for(i=2;i<=n/2;i++){
			if(n%i==0){
			
			count++;
			break;
		}
		}
	}
	printf("%d\n",m-1-count);
	return 0;
}

 //判断2与一个数之间有多少个素数，两层循环，if的花括号不可以忘加
 //1000000与2之间共有素数78498个，用时 51.32s。