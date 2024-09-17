#include <stdio.h>
int main(){
int a,b,reminder;
printf("Enter a no of a\n");
scanf("%d",&a);
printf("Enter a no of b\n");
scanf("%d",&b);
reminder = a%b;
printf("Value of a reminder is %d",reminder);
return 0;
}