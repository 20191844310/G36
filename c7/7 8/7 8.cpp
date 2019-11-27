// 7 8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<string.h>
int main(int argc, char* argv[])
{
	char a[80];
	void insert(char []);
	
	printf("input four digits:");
	scanf("%s",a);
	insert(a);
	printf("%s\n",a);
	
	return 0;
}

void insert(char b[]){
	int i;
	
	i=strlen(b);
	
	for(i;i>0;i--){
		b[2*i]=b[i];
		b[2*i-1]=' ';
		}
}