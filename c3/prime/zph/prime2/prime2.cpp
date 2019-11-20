// prime2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <time.h>
#include <math.h>
int main(int argc, char* argv[])
{
	int prime( int n);
	int n,i,m;
	int total=0;
	long t0,t1;
	scanf("%d",&m);

	t0 = clock();

	for(n=2;n<=m;n++){
		if (prime(n)){

			total++;
			
		}
	}

	t1 = clock();

	printf("%d\n",total);

	printf("%10.2f\n", (t1 - t0)/(float)CLOCKS_PER_SEC);
	return 0;
}

int prime(int n)
{
	int i;
	int flag=1;

	for(i=2;i<=n/2;i++){
		if(n%i==0){
			flag=0;
			break;
		}

	}
	return flag;

}
//ÓÃÊ±53s