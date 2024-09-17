#include <stdio.h>
int main() {
int A;
printf("Enter a no\n");
scanf("%d",&A);
if(A%2 == 0){
printf("%d is an even no\n", A);
}
else{
printf("%d is an odd no\n", A);
}
return 0;
}