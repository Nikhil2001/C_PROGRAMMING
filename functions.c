#include <stdio.h>
#include <stdlib.h>

void main(){
	
	int a=10,b=15;
	
	int sum(int x,int y){
		return x+y;
	}
	
	int same_sum(int *p,int *q){
		return *p+*q;
	}
	
	void same_sum_no_return(int x,int y){
		printf("the sum of %d and %d is %d \n",x,y,x+y);
	}
	
	
	
	printf("the sum of %d and %d is %d \n",a,b,sum(a,b));
	printf("the sum of %d and %d is %d \n",a,b,same_sum(&a,&b));
	same_sum_no_return(a,b);
}


/*output:
the sum of 10 and 15 is 25
the sum of 10 and 15 is 25
the sum of 10 and 15 is 25
*/
