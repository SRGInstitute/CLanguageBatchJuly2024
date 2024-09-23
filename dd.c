#include<stdio.h>
int main () {
float a;
printf("enter a no.= ");
scanf("%f",&a);
if(a<=33)      {
     printf("%f\n  Fail.",a);    }
else if(a>33  &&  a<60)     {
     printf("%f\n  2st.",a);       }
else if(a>60 && a<75)     {
      printf("%f\n  1st.",a);     }
else     {   
       printf("%f\n   Distinguished.",a);      }
return 0;
}