#include<stdio.h>
int main() {
int a,b ,c;
printf("a=\n   b=\n  c=\n");
scanf("%d%d%d",&a,&b,&c);
if(a>b   && a>c)
{
    printf("a%d\n",a);
}
else if(b>a  &&  b>c)
   {
      printf("b%d\n",b);
}
else
{
printf("c%d\n",c);
}
return 0;
}