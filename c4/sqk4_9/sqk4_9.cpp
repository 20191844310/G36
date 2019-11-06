// sqk3_9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<math.h>

int main(int argc, char* argv[])
{
	int a,b,c,m,n,count,mask;
	count=1;
	scanf("%d",&a);
	b=a;//②
	c=a;//③
	while(a/10>0){//①a大于十位数就加一，最后个位也算，所以count一开始为一
		count++;
		a=a/10;
				}
	printf("%d\n",count);
	mask=pow(10,count-1);//由位数确定一开始除多少
	while(b/10>0){
			m=b/mask;//m=1,2,3,4（循环四次应该是）
		b=b%mask;//m=12345,2345,345,45,5
		mask=mask/10;//始终保证mask与b位数相同
		printf("%d ",m);//顺次输出各位数
	}
	printf("%d\n",b);//很遗憾最后一位的时候已经不满足循环了，所以输出此时的b即为5

	while(c/10>0){//倒序输出
		n=c%10;//n=5,4,3,2
		c=c/10;//c=1234，123,12,1？
		printf("%d ",n);
				}
	printf("%d\n",c);//同上面最后一位的b
	return 0;
}

