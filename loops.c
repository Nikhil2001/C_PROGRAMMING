#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define true 1
#define false 0
int main(){
    int num=5,option=3;
    
    void forloop(int x){
    	int fact=1,i;
	 for( i=1;i<=x;i++){
	      fact=fact*i;
	 }
	  printf("factorial of %d  using for loop is %d",x,fact);
	}
	
	void whileloop(int x){
		int fact=1,i=1;
		while(i<=x){
			fact=fact*i;
			i+=1;
		}
		 printf("factorial of %d  using whule loop is %d",x,fact);
	}
	
	void dowhileloop(int x){
		int fact=1,i=1;
		do{
			fact=fact*i;
			i+=1;
		}while(i<=x);
		 printf("factorial of %d  using do while loop is %d",x,fact);
	}
	
	
    
	
    switch(option){
    	case 1: whileloop(num);
    	break;
    	case 2: dowhileloop(num);
    	break;
    	case 3: forloop(num);
    	break;
    	default: printf("no options selected");
    	break;
	}
}


/* output:

factorial of 5  using for loop is 120


*/
