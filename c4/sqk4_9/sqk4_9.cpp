// sqk3_9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<math.h>

int main(int argc, char* argv[])
{
	int a,b,c,m,n,count,mask;
	count=1;
	scanf("%d",&a);
	b=a;//��
	c=a;//��
	while(a/10>0){//��a����ʮλ���ͼ�һ������λҲ�㣬����countһ��ʼΪһ
		count++;
		a=a/10;
				}
	printf("%d\n",count);
	mask=pow(10,count-1);//��λ��ȷ��һ��ʼ������
	while(b/10>0){
			m=b/mask;//m=1,2,3,4��ѭ���Ĵ�Ӧ���ǣ�
		b=b%mask;//m=12345,2345,345,45,5
		mask=mask/10;//ʼ�ձ�֤mask��bλ����ͬ
		printf("%d ",m);//˳�������λ��
	}
	printf("%d\n",b);//���ź����һλ��ʱ���Ѿ�������ѭ���ˣ����������ʱ��b��Ϊ5

	while(c/10>0){//�������
		n=c%10;//n=5,4,3,2
		c=c/10;//c=1234��123,12,1��
		printf("%d ",n);
				}
	printf("%d\n",c);//ͬ�������һλ��b
	return 0;
}

