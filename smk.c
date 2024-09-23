#include<stdio.h>
int main() {
int a,b;
char os;
printf("enter a and b ");
scanf("%d%d",&a,&b);
printf("enter  '+,-,/,*' :\n");
scanf(" %c",&os);
switch(os){
case'+':
printf("+:\n%d",a+b);
break;
case'-':
printf("- :\n%d",a-b);
break;
case'*':
printf("*:\n%d",a*b);
break;
case'/':
printf("/ :\n%d",a/b);
break;
default:
printf("out of value");
}
return 0;
}
