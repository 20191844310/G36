// prime03.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
int is_prime(int m);//�зֺš�
int main(int argc, char* argv[])
{int a,b,m,n,total=0;
	scanf("%d",&a);
	for(m=2;m<=a;m++){
		if(is_prime(m))//if(is_prime)�ķ���ֵΪ�棬��flag=1�����ʱnΪ���� 
			total++;
		
	} 
	printf("%d\n",total);//total��Ϊ�������� 
	
	
	return 0;
}

int is_prime(int m)//�˴��޷ֺţ���֪��Ϊʲô�����庯����ʱ���üӣ� 
{
	int		n;
	int		flag = 1;

 	for(n=2;n<=m/2;n++) {
		if (m%n==0) {//���������� �� 
			flag = 0;
			break;//������ѭ�� ����return flag���� 
		}
	}

 	return flag;//flag==0ʱ�����if��ִ�� ,������������һ 
 }
 //�����ȷ����ʱ76.95s��
 //is_prime��m�����������˵ڶ���ѭ�������ж�һ������m���Ƿ�Ϊ������ 
 //ʲôʱ���?���ǲ�̫�� 