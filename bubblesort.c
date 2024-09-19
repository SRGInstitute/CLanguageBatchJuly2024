#include<stdio.h>
int main(){
int i,j,size,temp;
int arr[6]={4,9,3,1,8,7};
printf("unsorted array is: ");
for(i=0;i<6;i++){
	printf("%d",arr[i]);
}

for(i=0;i<6;i++){
for(j=0;j<6-i-1;j++){
if(arr[j]>arr[j+1]){
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
}
}
printf("\nsorted array is: ");
for(i=0;i<6;i++){
	printf("%d",arr[i]);
}

return 0;
}