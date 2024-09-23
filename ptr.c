#include<stdio.h>
int main () {
int a=4;
int *ptr;
printf("%d",sizeof(a));
printf("%p\n",&ptr);
printf("%d\n",*ptr+2);
printf("%p\n",&ptr+2);
return 0;
}








