#include <stdio.h>
int main(){
float length,width,area;
printf("Enter the length of the rectangle\n");
scanf("%f",&length);
printf("Enter the width of rectangle\n");
scanf("%f",&width);
area = length*width;
printf("The area of a rectangle is = %f\n,",area);
return 0;
}