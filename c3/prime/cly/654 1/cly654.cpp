// cly654.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int             n, i;
	int             flag=1;

	printf("input a number");
	scanf("%d",&n);

	for(i=2;i<n/2;i++) {
		    if (n%i==0) {
			flag = 0;
			break;
		}
	}

	if (flag)
		printf("%d is a prime\n",n);
	else
		printf("%d is not a prime\n",n);

		return 0;
}
