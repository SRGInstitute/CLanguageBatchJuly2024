#include<stdio.h>
int main (){
int arr[5][5];
int i,j,smallest;
printf("enter the elements\n");
   for(i=0; i<5; i++){
     for(j=0; j<5; j++){
	 scanf("%d",&arr[i][j]);
	 }
	 }
printf("mtrix is\n");\
     for(i=0; i<5; i++){
     for(j=0; j<5; j++){
	 printf(" %d",arr[i][j]);
	 }
	 printf("\n");
	 }
	 return 0;
	 }