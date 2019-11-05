// sqk4_5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<math.h>

int main(int argc, char* argv[])
{
	int a,b;
	for(; ;){
	scanf("%d",&a);
	if(a<1000&&a>0){
		b=sqrt(a);
		printf("%d的平方根为%d",a,b);
	}
	else
		printf("请重新输入\n");
		continue;

	}
	return 0;
}

