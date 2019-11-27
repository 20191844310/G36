// 7 6.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
void connect(char a[],char b[])
{
	char c[20];
	int i,j;
	for(i=0;a[i]!='\0';i++) 
	   c[i]=a[i];
	for(j=0;b[j]!='\0';j++)
	   c[i+j]=b[j];
	   c[i+j+1]='\0';
		printf("连接后:\n");
		puts(c);
}
int  main()
{
	char a[10],b[10];
	printf("请输入两个字符串:\n");
	gets(a);
    gets(b);
	connect(a,b);
}
