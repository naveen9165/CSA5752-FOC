#include<stdio.h>
int main()
{
	int binary,decimal=0,base=1,remainder;
	printf("enter binary value:");
	scanf("%d",&binary);
	while(binary>0)
	{
		remainder=binary%10;
		decimal=decimal+remainder*base;
		binary=binary/10;
		base=base*2;
	}
	printf("decimal value of given:%d",decimal);
	return 0;
}
