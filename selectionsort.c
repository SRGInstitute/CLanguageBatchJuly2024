#include<stdio.h>
void selectionsort(int arr[],int size){
int i,j,min,temp;
for(i=0;i<size-1;i++){
min=i;
for(j=i+1;j<size;j++){
if(arr[j]<arr[min]){
min=j;
}
}
if(min!=i){
temp=arr[i];
arr[i]=arr[min];
arr[min]=temp;
}
}
}
void printArray(int arr[],int size){
int i;
for(i=0;i<size;i++){
printf("%d",arr[i]);
}
printf("\n");
}
int main(){
int arr[]={4,3,4,6,2};
int size=sizeof(arr)/sizeof(arr[0]);
printf("original array:\n");
printArray(arr,size);
selectionsort(arr,size);
printf("sorted array:\n");
printArray(arr,size);
return 0;
}