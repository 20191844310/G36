// date.cpp : Defines the entry point for the console application.
//

#include<stdio.h>
	int main(){
		int year,month,day,days,m[13],i;
		printf("请输入您的日期:");
		
			while(!0){
			
				scanf("%d%d%d",&year,&month,&day);
					if(month<1||month>12||day<1||day>31){//月份和日数明显不正确 
					printf("您输入的日期有误，请重新输入:");
					continue;
				}
				
				else	{	if(month==2){//二月合法性 
							if(day>29)
							{
							printf("您输入的日期有误，请重新输入:");
							continue;}
							if(day==29)
							{		
								if(!((year%4==0&&year%100!=0)||year%400==0))
								{
								printf("您输入的日期有误，请重新输入:");
									continue;
								}
								else
									break;
						}
						if(day<29&&day>0)
						 break; 
							}	 
					if(month!=2&&day<31&&day>0)
					break;
					if(day==31){
							if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
							break; 
							
							else
							{
								printf("您输入的日期有误，请重新输入:");
								continue;
							}
							    
						}
				
				 
			} 
 
		}
			days=day;
			m[1]=31;
			m[3]=31;
			m[5]=31;
			m[7]=31;
			m[8]=31;
			m[10]=31;
			m[12]=31;
			m[4]=30;
			m[6]=30;
			m[9]=30;
			m[11]=30;
			if(year%4==0&&year%100!=0||year%400==0)
				m[2]=29;
			else
				m[2]=28;
				for(i=1;i<=month-1;i++){
				days=days+m[i];
			}
			printf("%d年%d月%d日为该年第%d天",year,month,day,days);
		return 0;
}
