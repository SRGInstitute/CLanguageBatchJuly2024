#include<stdio.h>
int main () {
int a;
printf ("enter marks=");
scanf("%d",&a);
if(a>90)
{
printf("A  %d",a);
}
else if(a>80 &&  a<89)
{
printf(" B %d",a);
}
else if(a>=70 && a<79)
{
printf(" C %d",a);
}
else if(a>60  && a<69)
{
printf("D  %d",a);
}
else
{
printf("F  %d",a);
}
return 0;
}