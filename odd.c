#include<stdio.h>

void even(int n){
	for(int i=1;i<=3;i++){
		for(int j=1;j<=3;j++){
		if((i+j)==4)
		{
		printf("*");
		}
		else{
		printf(" ");
		}
	}
	printf("\n");
	}
}
void odd(int n){
	for(int i=1;i<=3;i++){
		for(int j=1;j<=3;j++){
	if(i==j){
		printf("*");
	}
	else{
		printf(" ");
	}
		}
		printf("\n");
	}
}

int main(){
	int n;
	printf("enter a value:");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("print primary diagonal\n");
		even(n);
	}
	else{
		printf("print secondary diagonal\n");
		odd(n);
	}
	return 0;
}
	