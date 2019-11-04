// 4 3.cpp : Defines the entry point for the console application.
//

include (stdio.h)
int main()
{
int a,b,c,z;
	scanf("%d%d%d",&a,&b,&c);
	  if(a>b)
	      z=a;
	  else
		  z=b;
	  if(z>c)
		  printf("max=%d",z);
		  else
		  printf("max=%d",c);
}