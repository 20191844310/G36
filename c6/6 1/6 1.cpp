// 6 1.cpp : Defines the entry point for the console application.
//
#include <stdio.h>
#include <math.h>
int main()
{
	int i,j,k,num[100];
	for(i=1;i<=100;i++)
		num[i]=i;
	for(i=1;i<=100;i++)
	{
		k=sqrt(i);
		for(j=2;j<=k;j++)
			if(num[i]%j==0)
				num[i]=0;	//筛选法：将合数筛去，置为0 
	}
	for(i=2;i<=100;i++)		//1不是素数也不是合数，从2开始 
		    if(num[i]>0)
			printf("%d ",num[i]);
	return 0;
 } 

