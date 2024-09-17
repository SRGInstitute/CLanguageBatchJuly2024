#include <stdio.h>
int main(){
int a,b,add,sub,mult,div;
printf("Enter a no of a\n");
scanf("%d",&a);
printf("Enter a no of b\n");
scanf("%d",&b);
add = a+b;
sub = a-b;
mult = a*b;
div = a/b;
printf("add a and b = %d\n",add);
printf("sub a and b = %d\n",sub);
printf("mult a and b = %d\n",mult);
printf("div a and b = %d\n",div);
return 0;
}
