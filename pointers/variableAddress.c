//program to find the address of variable "a".
#include<stdio.h>
int main(){
int a;
printf("enter the value a: \n");
scanf("%d",&a);
printf("the value of a is: %d\n",a);
printf("%p",&a);
return 0;
}