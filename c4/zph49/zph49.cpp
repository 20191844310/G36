// zph49.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>
int main(int argc, char* argv[])
{
	int a,n1,n2,n3,n4,n5;
	
	scanf("%d",&a);

	for(;;){
		if(a>100000||a<0){
			printf("重新输入");
			scanf("%d",&a);
		}
		else
			break;
	}

	if(a<10){
		printf("一位数\n");
		printf("%d\n",a);
		printf("%d\n",a);
	}
	if(a>=10 && a<100){
			
		printf("两位数\n");
		n1=a%10;
		n2=a/10;
		printf("%d\n",n2);
		printf("%d\n",n1);
		printf("%d%d\n",n1,n2);

	}
		if(a>=100 && a<1000){
		printf("三位数\n");
		n1=a%10;
		n3=a/100;
		n2=(a/10)-(n3*10);
		
		printf("%d\n",n3);
		printf("%d\n",n2);
		printf("%d\n",n1);
		printf("%d%d%d\n",n1,n2,n3);
	}
	if(a>=1000 && a<10000){
		printf("四位数\n");
		n1=a%10;
		n4=a/1000;
		n3=a/100-n4*10;
		n2=a/10-n3*10-n4*100;
		printf("%d\n",n4);
		printf("%d\n",n3);
		printf("%d\n",n2);
		printf("%d\n",n1);
		printf("%d%d%d%d\n",n1,n2,n3,n4);
	}
	if(a>=10000){
		printf("五位数\n");
		n1=a%10;
		n5=a/10000;
		n4=a/1000-n5*10;
		n3=a/100-n4*10-n5*100;
		n2=a/10-n3*10-n4*100-n5*1000;
		printf("%d\n",n5);
		printf("%d\n",n4);
		printf("%d\n",n3);
		printf("%d\n",n2);
		printf("%d\n",n1);
		printf("%d%d%d%d%d\n",n1,n2,n3,n4,n5);
	}


	return 0;
}

