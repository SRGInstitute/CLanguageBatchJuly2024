#include<stdio.h>
int main () {
int arr[2][2],transpose,i,j;

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
				transpose=arr[j][i];
				}
				
			printf("\n");
			}
			
printf("Transpose of matrix\n");
 		for(int i=0;i<2;i++) {
			 for( int j=0; j<2; j++) 
			 {
				printf("%d ",arr[j][i]);
				}
				
			printf("\n");
			}		
			
		return 0;
		}