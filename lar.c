#include<stdio.h>
int main () {
int array_size, arr[100], i, smallest, largest;
printf("enterv the array size\n");
scanf("%d",&array_size);
printf("enter the array element\n");
  for(i=0; i<array_size; i++) {
     scanf("%d",&arr[i]);
	 }
	 smallest=arr[0];
	
	 largest=arr[0];
	  for(i=0; i<array_size; i++) {
	  if(arr[i]<smallest) {
	  smallest=arr[i]; 
	  
	  }
	  
	  if(arr[i]>largest) {
	  largest=arr[i];
	 
	  }
	  }
	  printf("\nsmallest: %d",smallest);
	   printf("\nlargert: %d",largest);
	  return 0;
	  }
	  