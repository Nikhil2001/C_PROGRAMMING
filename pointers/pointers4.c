#include <stdio.h>
#include <stdlib.h>

void main(){
	
	int a=10;
	int *p,**q,***r; //pointerss to the pointers
	p=&a;
	q=&p;
	r=&q;
	printf("%d \n",*p);
	printf("%d \n",*(*q));
	printf("%d \n",*(*(*r)));
	
	*p=12;
	printf("%d \n",a);   
	 **q=14;
	 printf("%d \n",a);
	 ***r=18;
	 printf("%d \n",a);
}

/* output 
10
10
10
12
14
18
*/
