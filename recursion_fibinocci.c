#include <stdio.h>
#include <stdlib.h>

int num=10;
void main(){
	num=num-2;
	int a=0,b=1;
	printf("%d \n",a);
	printf("%d \n",b);
	void fun(int a, int b){
		printf("%d \n",a+b);
		num--;
		if(num)
		fun(b,a+b);		
	}
	
	fun(a,b);
	 
}

/*output
0
1
1
2
3
5
8
13
21
34
*/
