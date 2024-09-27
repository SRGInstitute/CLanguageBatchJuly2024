#include<stdio.h>
int main () {
int arr[]= {0,1,2,0,0,1,2};
int size=sizeof(arr)/sizeof(arr[0]);
int count0=0, count1=0, count2=0;
    for(int i = 0; i<size; i++) {
	  if(arr[i]==0) {
	     count0++;
	  }
	  else if(arr[i]==1) {
	     count1++;
	  }
	  else if(arr[i]==2) {
	     count2++;
	  }
	  }
	  for(int i = 0; i<count0; i++) {
	  arr[i]=0;
	  }
	  for(int i=count0; i<count0+count1; i++) {
	  arr[i]=1;
	  }
	  for(int i=count0+count1; i<count0+count1+count2; i++) {
	  arr[i]=2;
	  }
	  for(int i = 0; i<size; i++) {
		  printf("  %d",arr[i]);
	  }
	  return 0;
}
