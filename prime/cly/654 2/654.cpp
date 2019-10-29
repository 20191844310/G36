// 654.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int               n,i,m;
	int               flag;
	int               total = 0;
	
	printf("input a number:");
	scanf("%d", &m);

		for(n=2;n<=m;n++) {
			flag = 1;
			for(i=2;i<=n/2;i++) {
				if (n%i==0) {
					flag = 0;
					total ++;
						break;
				}
			}

			if(flag)
				printf("%d", n);
		}
		printf("\nTotal prime numbers between 2 and %d: %d\n", m, m - 1 - total);

		return 0;
}

//78498    106s
