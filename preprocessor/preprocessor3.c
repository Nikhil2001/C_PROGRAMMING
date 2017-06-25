#include <stdio.h>
#include <stdlib.h>

//PREPROCESSORS

#define PI 3.14
#if !defined (RADIUS)
  #define RADIUS 5
#endif

void area(){
	int area;
	area=PI*RADIUS*RADIUS;
	printf("The area of circle is %d \n",area);
	
	
}

//output: The area of circle is 314
