#include<stdio.h>
#include<stdlib.h>


void main(){
 
 	int x; 
 	char y;
 	int a[10];
 	printf("%d \n",&x); //memory location of variable x
 	printf("%d \n",&y);//memory location of variable y
 	printf("%d \n",&a);//memory location of array /starting address
 	printf("%d \n",&a[0]);
 	printf("%d \n",&a[1]);
 	printf("%d \n",&a[2]);
 	printf("%d \n",&a[3]);   //sequential location for each element of an array  and each element is of 4 bytes
 	printf("%d \n",&a[4]);
 	printf("%d \n",&a[5]);
 	printf("%d \n",&a[6]);
 	printf("%d \n",&a[7]);
 	printf("%d \n",&a[8]);
 	

}
/*output:
2293324
2293323
2293280
2293280
2293284
2293288
2293292
2293296
2293300
2293304
2293308
2293312

*/
