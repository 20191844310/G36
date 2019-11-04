// cly 4 8.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
int main()
{
	int a;
	printf("ÇëÊäÈë³É¼¨:");
	scanf("%d",&a);
	
		if(a>100||a<0)
		{
			printf("ÊäÈë´íÎó!");
	}
	else
	{
	if(a>=90)
	{	printf("A");
	}
	if(80<=a&&a<=89)
	{	printf("B");
	}
	if(70<=a&&a<=79)
	{   printf("C");
	}
	if(60<=a&&a<=69)
	{   printf("D");
	}
	if(0<=a&&a<60)
	{   printf("E");
    }
}
    return 0;
}

	


