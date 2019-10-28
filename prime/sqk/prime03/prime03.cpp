// prime03.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
int is_prime(int m);//有分号。
int main(int argc, char* argv[])
{int a,b,m,n,total=0;
	scanf("%d",&a);
	for(m=2;m<=a;m++){
		if(is_prime(m))//if(is_prime)的返回值为真，即flag=1，则此时n为素数 
			total++;
		
	} 
	printf("%d\n",total);//total即为素数个数 
	
	
	return 0;
}

int is_prime(int m)//此处无分号，不知道为什么，定义函数的时候不用加？ 
{
	int		n;
	int		flag = 1;

 	for(n=2;n<=m/2;n++) {
		if (m%n==0) {//非素数出现 ！ 
			flag = 0;
			break;//跳出该循环 到达return flag处？ 
		}
	}

 	return flag;//flag==0时上面的if不执行 ,素数个数不加一 
 }
 //结果正确，用时76.95s。
 //is_prime（m）函数代替了第二层循环，即判断一个数（m）是否为素数？ 
 //什么时候加?还是不太懂 