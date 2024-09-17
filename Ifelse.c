#include <stdio.h>
int main(){
int percentage;
printf("The value of percentage a\n");
scanf("%d",&percentage);
if (percentage>=90){
printf("Grade of a person is a");
}
else if (percentage>80){
	printf("Grade of a person is B");
}
else if (percentage>70){
	printf("Grade of a person is C");
}
else{
printf("Grade of a person is d");
}
return 0;
}
