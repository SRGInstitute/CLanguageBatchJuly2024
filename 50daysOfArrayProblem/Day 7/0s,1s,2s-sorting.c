#include <stdio.h>
int main() {
    int count0=0, count1=0, count2=0;
     int arr[] ={0,1,2,0,2,1,0,2,1};
     int size = sizeof(arr)/sizeof(arr[0]);
	 
	 //count the occurrence of each element.
	 
     for(int i=0; i< size; i++)
     {
         if(arr[i]==0)
         {
         count0++;             
         }
         else if(arr[i]==1)
         {
             count1++;
         }
         else if(arr[i]==2)
         {
             count2++;
         }
     }
	 
	 //Rebuild the array.
	 
	 int index=0;     
     for(int i=0; i<count0; i++)
     {
        arr[index++]=0;
     }
     
     for(int  i=0; i<count1; i++)
     {
         arr[index++]=1;
     }
	 
     for(int i=0; i<count2; i++)
     {
         arr[index++]=2;
     }
	 
	 //output the sorted array.
	 
	 printf("sorted array: ");
     
     for(int i=0; i<size; i++)
     {
         printf("%d ", arr[i]);
     }
	 printf("\n");
	 
    return 0;
}