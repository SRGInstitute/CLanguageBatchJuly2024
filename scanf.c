#include<stdio.h>
int main () {
int arr[2][2],multiply = 1;

printf("enter element\n");
 		for(int i=0;i<2;i++) {
			 for( int j=0; j<2; j++) 
			 {
				scanf("%d",&arr[i][j]);
				}
				
				}
				
				
printf("matrix\n");
 		for(int i=0;i<2;i++) {
			 for( int j=0; j<2; j++) 
			 {
				 
				printf("%d ",arr[i][j]);
				multiply=multiply * arr[i][j];
				
				}
				printf("\n");
				}
			printf("%d ",multiply);	
				return 0;
				}