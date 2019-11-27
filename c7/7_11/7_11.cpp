// 7_11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	char a[10];
	void pao(char a[]);
	int i,b;
		scanf("%s",a);
		pao(a);
		printf("%s ",a);	
	return 0;
}
void pao(char a[10])
{
	int i,j,t;
	for(i=0;i<9;i++){
		for(j=0;j<9-i;j++){
			if(a[j]>a[j+1]){
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
		}
		}
	}
}

