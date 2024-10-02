#include<stdio.h>
int main (){
int a , b ,max;
printf("enter the no  of  a  : \n");
scanf("%d",&a);
printf("enter the  no  of b : \n ");
scanf("%d",&b);
max =a>b?a:b;
printf("print the maxmimum value of a and b = %d",max);
return 0;
}