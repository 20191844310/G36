// myz4_5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>
#include<math.h>
#define M 1000
int main(int argc, char* argv[])
{
	int i,k;

	printf("������һ��С��%d������i:",M);
	scanf("%d",&i);
	while (i>M){
		printf("��������ݲ�����Ҫ������������һ��С��%d������i:",M);
		scanf("%d",&i);
		
	}
	k=sqrt(i);	
	
	printf("%d��ƽ����������������%d\n",i,k);
	return 0;
}

