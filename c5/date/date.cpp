// date.cpp : Defines the entry point for the console application.
//

#include<stdio.h>
	int main(){
		int year,month,day,days,m[13],i;
		printf("��������������:");
		
			while(!0){
			
				scanf("%d%d%d",&year,&month,&day);
					if(month<1||month>12||day<1||day>31){//�·ݺ��������Բ���ȷ 
					printf("�������������������������:");
					continue;
				}
				
				else	{	if(month==2){//���ºϷ��� 
							if(day>29)
							{
							printf("�������������������������:");
							continue;}
							if(day==29)
							{		
								if(!((year%4==0&&year%100!=0)||year%400==0))
								{
								printf("�������������������������:");
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
								printf("�������������������������:");
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
			printf("%d��%d��%d��Ϊ�����%d��",year,month,day,days);
		return 0;
}
