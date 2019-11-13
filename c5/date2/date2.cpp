// date2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main(int argc, char* argv[])
{
// tianshu.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int m1,m2,m3,m4,m5,m6,m7,m8,m9,m10,m11;
	int y,m,d,t;

 

	m1=m3=m5=m7=m8=m10=31;
	m4=m6=m9=m11=30;
	
	printf("输入xx年xx月xx日:");

	scanf("%d年%d月%d日",&y,&m,&d);
	
		if(y%4!=0 || y%100==0 && y%400!=0){//不是闰年
		m2=28;
	}
	else
		m2=29;

	for(;;){
		if(m>12){
			printf("重新输入");
			scanf("%d",&m);
		}
		else
			break;
	
	}

		switch(m){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10: 
		case 12:for(;;){
						if(d>31){
							printf("重新输入");
							scanf("%d",&d);
						}
						else 
							break;
				}
				break;
		case 4:
		case 6:
		case 9:
		case 11:for(;;){
						if(d>30){
							printf("重新输入");
							scanf("%d",&d);
						}
						else 
							break;
				}
				break;
		case 2:for(;;){
						if(d>m2){
							printf("重新输入");
							scanf("%d",&d);
						}
						else 
							break;
				}
				break;
		}
	
	
	
	

	switch(m){
	case 1: t=d;break;
	case 2: t=m1+d; break;
	case 3: t=m1+m2+d;break;
	case 4: t=m1+m2+m3+d;break;
	case 5: t=m1+m2+m3+m4+d;break;
	case 6: t=m1+m2+m3+m4+m5+d;break;
	case 7: t=m1+m2+m3+m4+m5+m6+d;break;
	case 8: t=m1+m2+m3+m4+m5+m6+m7+d;break;
	case 9: t=m1+m2+m3+m4+m5+m6+m7+m8+d;break;
	case 10: t=m1+m2+m3+m4+m5+m6+m7+m8+m9+d; break;
	case 11: t=m1+m2+m3+m4+m5+m6+m7+m8+m9+m10+d; break;
	case 12: t=m1+m2+m3+m4+m5+m6+m7+m8+m9+m10+m11+d; break;

	}
	printf("%d\n",t);
	return 0;
}

	return 0;
}
