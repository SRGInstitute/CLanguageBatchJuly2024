#include<stdio.h>
int main(){
	int n,product;
	printf("enter a number:");
	scanf("%d",&n);
	product=1;
	for(int i=1;i<=n;i++)
	{
		product=product*i;
		
	}
	printf("factorial is: %d",product);
	return 0;
}