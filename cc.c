#include<stdio.h>
int main () {
int a;
printf(" enter number a =  ");
scanf("%d",&a);

if(a<50)
{
         printf(" %d\n fail",a);
}
else if(a>=50 &&  a<=74)
{
          printf("%d\n pass",a);
}
else
{
           printf("%d\n distinguished",a);
}
return 0;
}

