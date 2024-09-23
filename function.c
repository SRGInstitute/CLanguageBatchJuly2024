#include<stdio.h>
  void dashline(void);
  int main(){
	  
  printf("i am lrerning today");
  dashline();
  printf("\nbye bye");
  return 0;
  }
  void dashline(void){
  for( int i=1; i<200; i++){
  
 if(i%2==0){
	 printf("*");
  }
  else{
	  printf("n-");
  }
  }
  }