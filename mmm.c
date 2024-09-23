#include<stdio.h>
int main () {
float p, c, m, e, h;
float Total;
float percentage;
printf("enter physics marks=");
scanf("%f",&p);
printf(" enter chemistry marks = ");
scanf("%f",&c);
printf(" enter maths marks = ");
scanf("%f",&m);
printf(" enter english marks = ");
scanf("%f",&e);
printf(" enter hindi marks = ");
scanf("%f",&h);
Total= p+c+m+e+h;
percentage=(Total/5);
printf("Total    %f\n",  Total);
printf("percentage     %f\n",   percentage);
return 0;
}

