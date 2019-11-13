// myz5_4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	char c;
	int letter=0,space=0,digit=0,other=0;
	printf("请输入一串字符串\n");
	
	while((c=getchar())!='\n')
	{
		if(c>='a'&&c<='z'||c>='A'&&c<='Z')
			letter++;
		else if(c==' ')
			space++;
		else if(c>='0'&&c<='9')
			digit++;
		else
			other++;
	}
	printf("字母数：%d\n空格数：%d\n数字数：%d\n其他字符数：%d\n",letter,space,digit,other);
	return 0;
}

