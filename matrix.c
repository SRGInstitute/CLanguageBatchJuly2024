#include<stdio.h>
int main () {
  int i,j, arr[3][3];
  printf("\n enter no");
  
  for(int i=0; i<3; i++) {
	  
     printf("%d",&arr[i]);
	 for( int j=0; j<3; j++) {
	 printf(" %d",&arr[j]);
	 scanf("%d",arr[i][j]);
	 
	 printf(" %d",arr[i][j]);
	 }
	 printf("\n");
  }
	 
	 
	 return 0;
	 }
	 