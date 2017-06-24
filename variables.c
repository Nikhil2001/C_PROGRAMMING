#include <stdio.h>
#include <stdlib.h>


#define k 7
void main(){
	//to define a variable 
	const int c=5;  //same data types 
	int d =6;
	printf("%d \n",c); // c is  read only type as it is declared as constant,same with k which is declared using define preprocessor
	d=10;
	printf("%d \n",d); 
	printf("%d \n",k);
	
}

/*output 

5
10
7
*/
