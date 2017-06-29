#include <stdlib.h>
#include <stdio.h>


void main(){
	int a=258;
	int *p;
	char *q;
	p=&a;
	q=(char*)p;
	
	printf("%d \n",p);
	printf("%d \n",*q);
	printf("%d \n",*(q+1));
}
