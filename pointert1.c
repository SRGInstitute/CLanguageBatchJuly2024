#include<stdio.h>
int main (){
	int x =100;
	int *p=&x;
p=p+2;
	printf("%d",p-&x);
	return 0;
}