// sqk32.cpp : Defines the entry point for the console application.
//

#include<stdio.h>
#include<math.h>


int main(int argc, char* argv[])
{	int a,b;
	float p,m,n;
	scanf("%d",&a);
	if(a=1){
		p=1000*(1+5*0.03);
		printf("%f",p);
	}
		if(a=2){
			p=1000*(1+2*0.021)*(1+3*0.0275);
			printf("%f",p);}
				if(a=3){
					p=1000*(1+3*0.0275)*(1+2*0.021);
				printf("%f",p);}

				if(a=4){
					m=pow(1.015,5);
					p=1000*m;
					printf("%f",p);}
				if(a=5){
					n=pow(1+0.0035/4,20);
					p=1000*n;
					printf("%f",p);}
	return 0;
}