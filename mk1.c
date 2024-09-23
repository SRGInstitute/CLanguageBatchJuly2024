#include<stdio.h>
int main() {
int a;
printf("enter a=");
scanf("%d",&a);
/*
if(a==1)
{
     printf("first   %d\n",a);
}
else if(a==2)
{
      printf(" second   %d\n",a);
}
else if(a==3)
{
   printf("third   %d\n",a);
}
else
{
    printf("forth   %d\n",a);
}
*/

switch(a) {
case 1:
printf("One\n");
case 2: 
printf("Two\n");
break;
case 3:
printf("Three\n");
break;
case 4:
printf("Four\n");
break;
default:
printf("Bhai value sahi enter kr(1-4) ke beech mai");
}
return 0;
}