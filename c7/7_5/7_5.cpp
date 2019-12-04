// 7_5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
void	change(char a[10]){
		int i,t;
		for(i=0;i<=4;i++)
		{	t=a[i];
			a[i]=a[9-i];
			a[9-i]=t;
}
}

int main(int argc, char* argv[])
{	char word[10];
	gets(word);
	change(word);
	puts(word);
	
	return 0;
}

