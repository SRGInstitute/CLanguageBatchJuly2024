#include <stdio.h>
int main(){
int num;
int sum_of_natural_no;
printf("Enter the natural no till you want the sum\n");
scanf("%d",&num);
sum_of_natural_no = (num*(num+1))/2;
printf("sum of natural number of this %d",sum_of_natural_no);
return 0;
}