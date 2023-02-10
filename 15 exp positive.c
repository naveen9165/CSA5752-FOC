#include<stdio.h>
int main()
{
	int n;
	printf("enter integer values:");
	scanf("%d",&n);
	if(n<0)
	printf("negative number");
	else if(n>0)
	printf("positive number");
	else
	printf("entered zero");
	return 0;
}
