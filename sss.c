#include<stdio.h>
int main () {
int a;
printf("enter temperature a=");
scanf(" %d",&a);
if(a<15)
{
printf("%d\n  cold ",a);
}
else if(a>15 && a<25)
{
       printf("%d\n  warm",a);
}
   else
{
      printf(" %d\n  hot",a);
}
return 0;
}