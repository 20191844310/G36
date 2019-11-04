// zph45.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>
int main(int argc, char* argv[])
{
	
	int a,b;

	scanf("%d",&a);

	for(;;){
		if(a>1000){
			printf("ÖØÐÂÊäÈë");
			scanf("%d",&a);
		}
		else
			break;
	}
		b=sqrt(a);
		printf("%d",b);	
	
	return 0;
}

