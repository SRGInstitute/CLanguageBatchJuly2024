#include <stdio.h>
int main(){
int a,b,reminder;
printf("Enter a no of a\n");
scanf("%d",&a);
printf("Enter a no b\n"); 
scanf("%d",&b);
reminder = a%b;
printf("Value of a reminder %d",reminder);
return 0;
}