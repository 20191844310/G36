// 6 2.cpp : Defines the entry point for the console application.
//

#include<stdio.h>
int main()
{
    int i,j,t;
    int a[10];
    printf("请输入10个数字:\n");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);//对数组赋值 
    for(j=0;j<9;j++)
        for(i=0;i<9-j;i++)//进行n-j次两两比较 
        if(a[i]>a[i+1])
        {
            t=a[i];
			a[i]=a[i+1];
			a[i+1]=t;
                 
        }
       printf("从小到大排序:\n");
    for(i=0;i<10;i++)
        printf(" %d",a[i]);
    return 0;
}

