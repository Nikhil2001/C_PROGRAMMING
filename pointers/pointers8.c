#include <stdio.h>
#include <stdlib.h>

void print(char a[]){ //equivalent to char *a;
	
		printf("%s \n",a);  // prints string from starting addresss
		printf("%d \n",a);
	}

void main(){
	char a[]="nikhil reddy mara";
	char *q;
	print(a); // pass array address
	q=a;
	printf("%d \n",a);
	a[0] ='m';
	printf("%s \n",q);
}

/*output

nikhi reddy mara
2293296
2293296  //may vary as memory allocated changes  at each execution .
*/
