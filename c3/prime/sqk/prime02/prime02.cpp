// prime02.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
int m,n,i,x;
	int count=0;
	scanf("%d",&m);
	for(n=2;n<=m;n++){
		for(i=2;i<=n/2;i++){
			if(n%i==0){
			
			count++;
			break;
		}
		}
	}
	printf("%d\n",m-1-count);
	return 0;
}

 //�ж�2��һ����֮���ж��ٸ�����������ѭ����if�Ļ����Ų���������
 //1000000��2֮�乲������78498������ʱ 51.32s��