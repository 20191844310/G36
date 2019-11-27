// 9981.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
int i,j,k,m,h,sum,count,b,p;
	int a[10][10];
	//求每一位的几次方和用了数组，a【i】【j】表示i的j次方。
	for(i=0;i<=9;i++){
		for(j=0;j<=9;j++){
			m=i;
			for(k=1;k<j;k++)
				m=m*i;//目的是求i的j次方。m=i×i是不对的，会求成类似方上方的东西，注意i=0和j=0的情况。
			a[i][j]=m;
		
		}

	}
	for(h=100;h<=999999999;h++){//和上次一样了就，只是多了个求位数的，目前认为位数必须先求。即必须先确定第几行。
	p=h;
	count=0;
	sum=0;
	while(p>0){
		p=p/10;
		count++;
			}
	p=h;
	while(p>0){//照旧
		b=p%10;
		sum=a[b][count]+sum;
		p=p/10;
	
	}

	if(sum==h)
		printf("%d ",h);
	}
	return 0;
}

