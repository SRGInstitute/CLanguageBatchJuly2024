#include<stdio.h>
 int factorial(int n);
 int main() {
 int num;
 printf("entr a no ");
 scanf("%d",&num);
 
 int r = factorial(num);
 
 printf("factorial of %d is %d\n",num, r);
 return 0;
 }
 int factorial(int n) {
 int fact=1;
 for(int i=1; i<=n; i++) {
 fact*=i;
 }
 return fact;
 }
 