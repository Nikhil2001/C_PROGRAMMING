#include <stdio.h>
#include <stdlib.h>

int sum;
typedef struct{  //def of structure
   int x;
   int y;
}s;

typedef union{   //def of union
   int x;
   int y;
}u;

int add(int x, int y){
	return x+y;
}

int adds(s a){      //structure as argument
	return a.x+a.y;
}


void main(){
	int a,b;
	a=add(10,15);
	s p; //initialise structure
	p.x=10;
	p.y=15;
	b=adds(p);
	printf("%d  \n%d \n",a,b);
	u q;  //initialise union
	q.x=10;
	printf("%d \n",q.x);
	q.y=16;   //x value is replaced by y  for assignong y due to one single memory
	printf("%d \n ",q.x);
	

}



/*output:
25
25
10
16


*/
