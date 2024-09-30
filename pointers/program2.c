
#include<stdio.h>
int main(){
int a;
int *p;
printf("enter the value a: \n");
scanf("%d",&a);
p=&a;
printf("the value of a is: %d\n",a);
printf("%p\n",p);
printf("%d\n",a);
printf("%p\n",*p);
return 0;
}