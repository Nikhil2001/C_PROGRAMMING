#include <stdio.h>
#include <stdlib.h>


void main(){
	 int a=9,c=10;
	 int sum=a+c;
	 int mul =a*c;
	 int diff =a-c;
	 int mod =a%c;
	 float b=2;
	 float div=a/b;
	 printf("The division of %d and %f is %f \n",a,b,div);
	 printf("The division of %d and %d is %d \n",a,c,a/c);
     printf("The sum of %d and %d is %d \n",a,c,sum);
     printf("The multiplication of %d and %d is %d \n",a,c,mul);
     printf("The difference between  %d and %d is %d \n",a,c,diff);
     printf(" the modulus of %d and %d is %d \n",a,c,mod);
}

