// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
int a=4;
char b= 'c';
double c = 4.3;

int *p;

char *q;
 double *r;
 

p=&a;
q= &b;
r=&c;

printf(" value at address %d\n", *p);
printf("address of a %d\n", *(&a));
printf(" value of a %d\n", a);




printf("%c\n", *q);
printf("%c\n", *(&b));
printf("%c\n", b);


printf("%f\n", *r);
printf("%f\n", *(&c));
printf("%f\n", c);

    return 0;
}