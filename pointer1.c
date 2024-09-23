#include<stdio.h>
int main () {
int a;
int *p;
printf("enter a\n");
scanf("%d",&a);
p=&a;
printf("value of a: \n %d",a);
printf("\n%p",&p);
printf("\n%p",p);
printf("\n%d",*p);
return 0;
}
