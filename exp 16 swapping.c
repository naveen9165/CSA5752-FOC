#include<stdio.h>
int main()
{
	int x,y,temp;
	printf("enter the value of x:");
	scanf("%d",&x);
	printf("enter the value of y:");
	scanf("%d",&y);
	printf("before swaping x=%d,y=%d",x,y);
	temp=x;
	x=y;
	y=temp;
	printf("after swaping x=%d,y=%d",x,y);
	return 0;	
}
