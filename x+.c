#include <stdio.h>
int main(){
int x=5;
int  y;
y = x++;
printf("Value of y %d",y);
y = x++;
printf("Value of Y %d",y);
printf("Value of x %d",x);

return 0;
}