#include <stdio.h>
int main(){
int even,odd,x;
printf("Enter a no of x\n");
scanf("%d",&x);

for(int i=1; i<=x; i++){

if (i%2==0){
printf("Even\n");
}
else{
printf("Odd\n");
}
}
return 0;
}