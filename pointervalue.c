#include<stdio.h>

int main()
{
 int a, b=10;
int *p;
 
p =&a;

printf("address of a %p\n", p);
printf("address of pointer %d", &p);
printf("address of b  %d\n", b);


return 0;
}