#include<stdio.h>
int main() {
int a,b,difference,sum;
printf("enter a=  \n   enter b=  \n");
scanf("%d%d",&a,&b);
difference=a-b;
sum=a+b;
if(a>b)
{
   printf("difference  %d\n",difference);
}
else
{
printf("sum  %d\n",sum);
}
return 0;
}