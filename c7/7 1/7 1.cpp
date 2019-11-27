// 7 1.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
int main()
{
	int max(int x,int y);
	int min(int x,int y);
	int a,b;
	printf("请输入两个数字:\n");
	scanf("%d%d",&a,&b);
	printf("最大公因数为:%d\n",max(a,b));
	printf("最小公倍数为:%d\n",min(a,b));
}
     int max(int x,int y)
	 {
		 int z;
		 while(y!=0)
		 {
			 z=x%y;
			 x=y;
			 y=z;
		 }
		 return x;
	 }
	 int min(int x,int y)
	 {
		 int z;
		 z=x*y/max(x,y);
		 return z;
	 }

