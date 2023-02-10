#include<stdio.h>
#include<math.h>
int main()
{
	int octal,decimal=0,i=0;
	printf("enter octal number=");
	scanf("%d",&octal);
	while(octal!=0)
	{
		decimal =decimal +(octal %10) * pow(8,i++);
		octal = octal/10;
	}
	printf("the decimal value =%d \n",decimal);
	return 0;
}
