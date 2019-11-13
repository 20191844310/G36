// 5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <time.h>
#include <math.h>
int main(int argc, char* argv[])
{
	int n,i,m;
	int flag=1;
	int total=0;
	long t0,t1;
	scanf("%d",&m);

	t0 = clock();

	for(n=2;n<=m;n++){
		flag=1;
	
		for(i=2;i<=n/2;i++){
			if(n%i==0){
			flag=0;
			total++;
			break;
			}
		}
	}

	t1 = clock();

	printf("%d\n",m-1-total);

	printf("%10.2f\n", (t1 - t0)/(float)CLOCKS_PER_SEC);//输出10列，保留2位小数

	return 0;
}

//找出78498个素数，用时60.80秒