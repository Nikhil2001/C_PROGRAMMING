#include <stdio.h>
#include <stdlib.h>

void inc(int *p){ 
	*p=*p+1;
}

int sum(int a){
    return a+1;	
}
void main(){
	int a=10;
	printf("%d \n",a);
	inc(&a);    //function call by reference
	printf("%d \n",a);
	printf("%d \n",sum(a));  //function call by value
	
}

/*
10
11
12
*/
