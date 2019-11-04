// zph48.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int a;

	char b;
	scanf("%d",&a);
	for(;;){
		if(a>100||a<0){
			printf("ÖØÐÂÊäÈë");
			scanf("%d",&a);
		}
		else
			break;
	}

	if(a>=90){
		b='A';
	}
	if(a<90 && a>=80){
		b='B';
	}
	if(a<80 && a>=70){
		b='C';
	}
	if(a<70 && a>=60){
		b='D';
	}
	if(a<60){
		b='E';
	}

	printf("%c\n",b);
	return 0;
}

