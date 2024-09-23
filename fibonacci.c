#include<stdio.h>
void generateFibonacci(int terms);
   int main() {
      int terms;
	      printf("enter number ");
		  scanf("%d",&terms);
		  
	generateFibonacci(int terms);
	return 0;
	}
	void generateFibonacci(int terms) {
	int a=0, b=1, next;
	for(int i=1; i=terms;  i++) {
	printf('%d",a);
	next=a+b;
	a=b;
	b=next;
	}
	printf("\n");
	}
	