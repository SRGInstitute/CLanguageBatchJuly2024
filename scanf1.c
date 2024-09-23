#include<stdio.h>
int main () {
int arr[2][2],largest;

printf("enter element\n");
 		for(int i=0;i<2;i++) {
			 for( int j=0; j<2; j++) 
			 {
				scanf("%d",&arr[i][j]);
				}
				}
largest=arr[0][0];
printf("matrix\n");
 		for(int i=0;i<2;i++) {
			 for( int j=0; j<2; j++) 
			 {
				printf("%d ",arr[i][j]);
				if(arr[i][j]>largest){
					largest=arr[i][j];
				
			 }
		}

			 printf("\n");
				}
			printf("%d ",largest);	
				return 0;
				}