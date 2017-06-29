#include <stdio.h>
#include <stdlib.h>


void main(){
	char a[]={'a','b'};
	char *p=&a[0];
	printf("%d \n",p);
	printf("%c \n",*p);
	printf("%d \n",p+1);
	printf("%c \n",*(p+1));
	
	}

	
	
