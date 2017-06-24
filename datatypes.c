#include <stdio.h>
#include <stdlib.h>



void main(){
	//to define a variable 
	int a,c=5;  //same data types 
	char b; // declared , but can be initialised later 
  	a =17 ;
  	float f = 1.234;
  	double d = 1.234;
	int sum =a+c;
	b='M';
	printf("%c \n",b);
	
	printf("%d \n",sum);
	
	//size of int 
	printf("%d \n",sizeof(int));  // size of int  in bytes 
	
	//range of int 
	printf("%d\n",INT_MIN); // to min value of integer
	
	printf("%d\n",INT_MAX); //  to max value of integer
}

/*output :

M
22
4
-2147483648
2147483647

*/
