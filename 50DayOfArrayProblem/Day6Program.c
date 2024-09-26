#include<stdio.h>
	
	int count(int arr[], int n, int x) {
	   int count = 0;
	   for(int i = 0;i<n;i++) {
	       if (x == arr[i]) {
	           count = count + 1;
	       }
	   }
	   if (count > 0) {
	       return count;
	   } else {
	       return 0;
	   }
	}

int main() {
	int arr[5] = {1,2,2,3,4};
	int itemToBeSearch = 8;
	printf("Enter the item to be counted:");
	scanf("%d",&itemToBeSearch);
	printf("count of %d: =  %d",itemToBeSearch,count(arr,5,itemToBeSearch));
	
	return 0;
}