#include<stdio.h>
int main () {
int arr[40], array_size;
int low,up,mid,searchelement;
printf("enter the size of array\n");
scanf("%d",&array_size);
printf("enter element of the array\n");
    for(int i=0; i<array_size; i++)
		scanf("%d",&arr[i]);
	printf("enter element to be searched\n");
	scanf("%d",&searchelement);
low=0;
up=array_size-1;
int count=0;
   while(low<=up) {
      mid=(low + up)/2;
	  if(arr[mid]<searchelement){
	  low=mid+1;
	  }
	  else if(arr[mid]>searchelement) {
	  up=mid-1;
	  }
	  else{
	  printf("element is found index %d\n",mid);
	  break;
	  count++;
	  }
	  }
	  if(low>up) {
		  printf("element not found\n");
	  }
	  printf("itteration is\n %d",count);
	  return 0;
	  }
	  