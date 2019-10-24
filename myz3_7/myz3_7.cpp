// myz3_7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	double h,r,l,s,sq,vq,vz;
	double pi=3.1415926; 
	printf("请输入圆半径r，圆柱高h：");
	scanf("%f,%f,&r,&h");	//输入圆的半径r和圆的高h
	l=2*pi*r;               //计算圆的周长l  
	s=pi*r*r;				//计算圆面积s
	sq=4*pi*r*r;			//计算圆球表面积sq
	vq=4.0/3.0*pi*r*r*r;	//计算圆球体积vq
	vz=pi*r*r*h;			//计算圆柱体积vz
	printf("圆周长为：           l=%f\n",l);
	printf("圆面积为：           s=%f\n",s);
	printf("圆球表面积为：		 sq=%f\n",sq);
	printf("圆球体积为：		 v=%f\n",vq);
	printf("圆柱体积为：		 vz=%f\n",vz);
	return 0;
}

