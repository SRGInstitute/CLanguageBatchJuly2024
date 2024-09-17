#include <stdio.h>
int main(){
int num;
printf("Enter a integer\n");
scanf("%d",&num);
if(num > 0){
printf("The num is positive\n");
}
else if (num < 0){
printf("The num is negtive\n");
}
else {
printf("The num is zero\n");
}
return 0;
}