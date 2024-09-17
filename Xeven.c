#include <stdio.h>
int main(){
int even,odd,x;
printf("Enter the no of x");
scanf("%d",&x);

for(int i=1; i<=x; i++){
	
	if(i%2==0){
	printf("**\n");
}
else{
	printf("***\n");
}
}
return 0;
}