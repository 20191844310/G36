// 9981.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
int i,j,k,m,h,sum,count,b,p;
	int a[10][10];
	//��ÿһλ�ļ��η����������飬a��i����j����ʾi��j�η���
	for(i=0;i<=9;i++){
		for(j=0;j<=9;j++){
			m=i;
			for(k=1;k<j;k++)
				m=m*i;//Ŀ������i��j�η���m=i��i�ǲ��Եģ���������Ʒ��Ϸ��Ķ�����ע��i=0��j=0�������
			a[i][j]=m;
		
		}

	}
	for(h=100;h<=999999999;h++){//���ϴ�һ���˾ͣ�ֻ�Ƕ��˸���λ���ģ�Ŀǰ��Ϊλ���������󡣼�������ȷ���ڼ��С�
	p=h;
	count=0;
	sum=0;
	while(p>0){
		p=p/10;
		count++;
			}
	p=h;
	while(p>0){//�վ�
		b=p%10;
		sum=a[b][count]+sum;
		p=p/10;
	
	}

	if(sum==h)
		printf("%d ",h);
	}
	return 0;
}

