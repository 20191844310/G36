// myz3_7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	double h,r,l,s,sq,vq,vz;
	double pi=3.1415926; 
	printf("������Բ�뾶r��Բ����h��");
	scanf("%f,%f,&r,&h");	//����Բ�İ뾶r��Բ�ĸ�h
	l=2*pi*r;               //����Բ���ܳ�l  
	s=pi*r*r;				//����Բ���s
	sq=4*pi*r*r;			//����Բ������sq
	vq=4.0/3.0*pi*r*r*r;	//����Բ�����vq
	vz=pi*r*r*h;			//����Բ�����vz
	printf("Բ�ܳ�Ϊ��           l=%f\n",l);
	printf("Բ���Ϊ��           s=%f\n",s);
	printf("Բ������Ϊ��		 sq=%f\n",sq);
	printf("Բ�����Ϊ��		 v=%f\n",vq);
	printf("Բ�����Ϊ��		 vz=%f\n",vz);
	return 0;
}

