// 7_3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
void	prime(int n){
		int i,count=0;
		for(i=2;i<=n-1;i++){
			if(n%i==0)
			{
				printf("%d is not a prime\n",n);
				break;
			}
			else
				count++;

		}if(count==n-2)
			printf("%d is a prime\n",n);
	}

int main(int argc, char* argv[])
{
	int m;
	scanf("%d",&m);
	prime(m);
	return 0;
}

