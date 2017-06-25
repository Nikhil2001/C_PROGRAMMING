#include <stdio.h>
#include <stdlib.h>
int g; //global variable 
void main(){
	
	int a=10,b=15; // local variables 
	g=a+b;
	
	int sum(){
		return g; //global used every where 
	}
		
		printf("%d \n",g);
		printf("%d ",sum());	
}

/*
25
25
*/
