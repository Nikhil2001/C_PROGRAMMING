#include <stdio.h>
#include <stdlib.h>

void main(){
	int a=5;
	printf("%d \n",&a);
	int *p =&a;  //pointer p points to integer type and here a is the integer and address is stored.
	printf("%d \n",p);
	printf("%d \n",*p);  //dereferncing or accessing value in memory location 
	*p=10;
	printf("%d \n",a);
	
}
