// myz5_4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	char c;
	int letter=0,space=0,digit=0,other=0;
	printf("������һ���ַ���\n");
	
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
	printf("��ĸ����%d\n�ո�����%d\n��������%d\n�����ַ�����%d\n",letter,space,digit,other);
	return 0;
}
