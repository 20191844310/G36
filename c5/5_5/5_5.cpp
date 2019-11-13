// 5_5.cpp : Defines the entry point for the console application
#include<stdio.h>
#include<math.h>
int main(){

	int n,a,b,i,j,sum=0,q;
	printf("a+aa+aaa+aaaa+aaaaa,œ» ‰a£¨‘Ÿ ‰n\na="); 
	scanf("%d",&a);
	printf("n=");
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		q=a*pow(10,i)*(n-i);
		sum=sum+q;
		
	}
	printf("%d",sum);
	return 0;
}



