#include <stdio.h>
#include <stdlib.h>

void print(int *a,int size){
	int i;
	for ( i=0;i<size;i++){
		printf("%d \n",a[i]);
	}
}
void main(){
	int a[3]={1,2,3};
	print(a,3);
}

/*

*/
