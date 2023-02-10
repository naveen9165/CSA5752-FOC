#include<stdio.h>
int main()
{
	int reverse=0,n,remainder;
	printf("enter integer number:");
	scanf("%d",&n);
	while(n !=0){
		remainder=n% 10;
		reverse= reverse *10+ remainder;
		n /=10;
	}
	printf("reverse number:%d",reverse);
}
