// myz4_12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	int	h=10;
	float x1=2.0,x2=-2.0,y1=2.0,y2=-2.0,x,y,d1,d2,d3,d4;
	
	for(;;){
	printf("请输入某点的坐标(x,y):");
	scanf("%f,%f",&x,&y);
	
	d1=(x-x1)*(x-x1)+(y-y1)*(y-y1);
	d2=(x-x2)*(x-x2)+(y-y1)*(y-y1);
	d3=(x-x2)*(x-x2)+(y-y2)*(y-y2);
	d4=(x-x1)*(x-x1)+(y-y2)*(y-y2);
	
	if(d1>1&&d2>1&&d3>1&&d4>1)
		h=0;
	else
		h=10;
	
	printf("该点的建筑高度是%d\n",h);
	
	}
	
	return 0;
}

