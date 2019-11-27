// 7 7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{	void yuanyin(char y[] ,char x[]);
	char a[80],b[80];
	
	scanf("%s",a);
	yuanyin(a,b);
	return 0;
}

void yuanyin(char y[] ,char x[])
{	int i,j;
	for(i=0,j=0;y[i]!='\0';i++){
		if(y[i]=='a'||y[i]=='A'||y[i]=='e'||y[i]=='E'||y[i]=='i'||y[i]=='I'||y[i]=='o'||y[i]=='O'||y[i]=='u'||y[i]=='U'){
			x[j]=y[i];
			j++;
		}
	}
	x[j]='\0';
	printf("%s\n",x);
	
}